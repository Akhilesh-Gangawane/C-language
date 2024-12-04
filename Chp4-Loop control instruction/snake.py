import random

def initialize_game(grid_size):
    return random.randint(0, grid_size-1), random.randint(0, grid_size-1)

def get_distance(player, treasure):
    return abs(player[0] - treasure[0]) + abs(player[1] - treasure[1])

def display_grid(grid_size, player):
    for i in range(grid_size):
        for j in range(grid_size):
            if (i, j) == player:
                print("P", end=" ")
            else:
                print(".", end=" ")
        print()

def main():
    grid_size = 5
    player = (0, 0)
    treasure = initialize_game(grid_size)
    moves = 0

    print("Welcome to the Treasure Hunt game!")

    while player != treasure:
        display_grid(grid_size, player)
        direction = input("Move (w/a/s/d): ").strip().lower()
        
        if direction == 'w' and player[0] > 0:
            player = (player[0] - 1, player[1])
        elif direction == 's' and player[0] < grid_size - 1:
            player = (player[0] + 1, player[1])
        elif direction == 'a' and player[1] > 0:
            player = (player[0], player[1] - 1)
        elif direction == 'd' and player[1] < grid_size - 1:
            player = (player[0], player[1] + 1)
        else:
            print("Invalid move!")

        moves += 1
        distance = get_distance(player, treasure)
        print(f"Clue: You are {distance} steps away from the treasure.")

    print(f"Congratulations! You found the treasure in {moves} moves!")

if __name__ == "__main__":
    main()

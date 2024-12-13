<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <h1>So Long 🎮</h1>
    <p>A simple 2D game developed in C where a character (dolphin, fish, or any other) escapes Earth after collecting items (the collectibles are keys from Kingdom Hearts, as I'm a huge fan of it, btw). Here's an overview of the project with instructions for setup and also a description of the game mechanics and components.</p>
    <p>The goal of the game is to collect all collectibles present on the map and then escape by finding the exit. The game features basic movement controls and a top-down or profile view of the game world.</p>
    <h2 id="installation">Installation</h2>
    <p>What will you find in this project?</p>
    <ul>
        <li>Makefile</li>
        <li>Source files (<code>*.c</code>)</li>
        <li>Header files (<code>*.h</code>)</li>
        <li>Map files (<code>*.ber</code>)</li>
        <li>Texture files</li>
    </ul>
    <h3>Building the Game 👾</h3>
    <p>How to compile the project:</p>
    <pre><code>make</code></pre>
    <p>This will generate an executable named <code>so_long</code>. You can then run the game with:</p>
    <pre><code>./so_long path/to/map.ber</code></pre>
    <h2 id="game-mechanics">Game Mechanics</h2>
    <h3>Controls</h3>
    <ul>
        <li>Use the W, A, S, and D keys to move the main character in four directions: up, down, left, and right.</li>
        <li>The player cannot move through walls.</li>
        <li>The current number of movements is displayed in the shell after each move.</li>
        <li>Pressing <code>ESC</code> or clicking the window's close button will exit the game.</li>
    </ul>
    <h2 id="map-structure">Explaining the Map Structure</h2>
    <p>The game map consists of three main components: walls, collectibles, and free space.</p>
    <ul>
        <li><code>0</code> - Empty space</li>
        <li><code>1</code> - Wall</li>
        <li><code>C</code> - Collectible</li>
        <li><code>E</code> - Exit</li>
        <li><code>P</code> - Player starting position</li>
    </ul>
    <p>Here is a simple valid map:</p>
    <pre><code>
1111111111111
10010000000C1
1000011111001
1P0011E000001
1111111111111
    </code></pre>
    <p> I needed to create a map that contains:</p>
    <ul>
        <li>1 exit</li>
        <li>At least 1 collectible</li>
        <li>1 starting position</li>
    </ul>
    <p>You can change the map format in code. See what happens if the map contains duplicate characters (exit/start). In addition, the map must be rectangular and closed by walls.</p>
    <h2 id="graphics-management">What did I use for Graphics Management?</h2>
    <p>The game displays images in a window using MiniLibX. It handles window management smoothly and allows the user to close the program cleanly.</p>
    <h2 id="external-functions">What About External Functions?</h2>
    <p>My program uses:</p>
    <ul>
        <li><code>open</code>, <code>close</code>, <code>read</code>, <code>write</code>, <code>malloc</code>, <code>free</code>, <code>perror</code>, <code>strerror</code>, <code>exit</code></li>
        <li>All functions of the MiniLibX.</li>
        <li><code>My version of printf function, called my_printf.</code></li>
    </ul>
    <h2 id="bonus-features">Bonus Features</h2>
    <p> I didn't use extra features for additional points, but, as long as you want:</p>
    <ul>
        <li>Make the player lose when they touch an enemy patrol.</li>
        <li>Add sprite animation.</li>
        <li>Display the movement count directly on the screen instead of writing it in the shell.</li>
    </ul>
</body>
</html>

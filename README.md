# Playlist Runtime & Average Calculator

A beginner C++ file I/O program that reads song entries from `playlist.txt`, calculates the combined runtime and average song duration across two tracks, and saves the formatted results to `summary.txt`.

## How It Works
1. Opens `playlist.txt` for reading using `ifstream`.
2. Reads two entries (`songName` and `currentRuntime`) and accumulates `totalRuntime`.
3. Computes `averageRuntime` by dividing `totalRuntime` by `2`.
4. Opens `summary.txt` for writing using `ofstream` and outputs both values formatted to two decimal places with `fixed` and `setprecision(2)`.

## File Format & Example

### Input (`playlist.txt`)
Place a `playlist.txt` file in the same working directory as the compiled executable, with a single-word song title and numeric duration per entry:
```text
SongA 3.50
SongB 4.25

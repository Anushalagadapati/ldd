#define MAGIC_NUMBER 'O'

#define SET_BAUD_RATE  _IOWR(MAGIC_NUMBER, 1, int)
#define SET_NO_STOP_BITS _IOWR(MAGIC_NUMBER, 2, int)
#define SET_DIRECTION_WRITE _IOW (MAGIC_NUMBER, 3, int)

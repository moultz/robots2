#define LEFT 0
#define RIGHT 1

// function prototypes for picomms.

//Sends a message
int send_msg(char* msg, int len);

// Initialise the robot
void initialize_robot();

// Connect to the robot
int connect_to_robot();

// Receive a message
int recv_msg(char *buf, int bufsize);

// Clear input stream
void clear_input_stream();

// Gets ditance from the GP2D IR sensors
int gp2d12_to_dist(int ir);
int gp2d120_to_dist(int ir);

// Sets motor speeds
void set_motor(int side, int speed);
void set_motors(int speed_l, int speed_r);

// Sets angle of the IR sensors
void set_ir_angle(int side, int angle);

// Reads values from a sensor
int one_sensor_read(char *sensorname, int *value);

// Gets distance from the IR sensors
int get_front_ir_dist(int side);
int get_side_ir_dist(int side);

int get_us_dist();
int two_sensor_read(char *sensornames, int *value1, int *value2);
int get_front_ir_dists(int *leftdist, int *rightdist);
int get_side_ir_dists(int *leftdist, int *rightdist);
int check_bump(int side);
int check_bumpers(int *lbump, int *rbump);
int get_voltage();
int get_motor_encoders(int *leftenc, int *rightenc);
void log_trail();

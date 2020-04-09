
// first program OO for Animal Crossing

class Avatar
{
 private:
  int my_gps = 0;
  std::string my_name;
  // int island_gps;
  // int Trip_list;

 public:
  // Avatar(Avatar_name, Avatar_gps, island_gps);
  Avatar(std::string name, int gps) { my_name = name; my_gps = gps; }
  Avatar() { my_name = "Anonymous"; my_gps = 0; }
  std::string getName(void) { return my_name; }
  int getGPS(void) { return my_gps; }
  void setGPS(int gps) { my_gps = gps; }
};

class Island
{
 private:
  // limited to 16 avatar per island
  Avatar *my_residents_ptr[16];
  int resident_count;
  int my_gps;
  std::string my_name;

 public:
  Island(std::string name, int gps) { my_name = name; my_gps = gps; resident_count = 0; } 
  void addResident(Avatar *new_resident_ptr)
  {
    if (resident_count > 16) return;
    my_residents_ptr[resident_count] = new_resident_ptr;
    resident_count = resident_count + 1;
  }
  std::string getName(void) { return my_name; }
  int getGPS(void) { return my_gps; }
  int getResidentCount(void) { return resident_count; }
  Avatar *getResidentByIndex(int idx)
  {
    if (idx < resident_count)
      return my_residents_ptr[idx];
    return (Avatar *) NULL;
  }
};

/*
class Trip
{
 public:
  Trip();

 private:
  int Avatar;
  int time_duration;
  int from_island;
  int to_island;
};
*/

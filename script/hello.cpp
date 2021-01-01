// Including a core set of basic gazebo functions to use in the code
#include <gazebo/gazebo.hh>

namespace gazebo
{
  // Creating plugin WorldPluginMyRobot that inherits from gazebo's WorldPlugin class.
  // This class uses multiple functions and variables, but we are only building a constructor and a function
  class WorldPluginMyRobot : public WorldPlugin
  {
    // Constructor - Function with the same name as the Class:ParentClass., It prints hello world
    public: WorldPluginMyRobot() : WorldPlugin()
            {
              printf("Hello World!\n");
            }
    // Load function is mandatory and always included as it receives information from the World file.
    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  // Register plugin with the simulator
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
  // FINALLYY - To manage and build this cpp code properly. wE should compile it with CMake.
  // CMake takes CMake_list.txt file as input. This txt file describes to cmake how to build the code, where to install it and link libraries to it.
  // 
}

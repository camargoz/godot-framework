#include <godot_cpp/classes/node3d.hpp>

namespace godot {
  
  class HelloWorld : public Node3D{
    GDCLASS(HelloWorld, Node3D)

    protected:
	    static void _bind_methods();

    public:
      HelloWorld();
      ~HelloWorld();

      void _ready() override;

      void _process(double delta) override;
    };
}
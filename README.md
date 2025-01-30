# 🚀 Game Engine Development Roadmap (Optimized)

A step-by-step guide to building your own game engine, leveraging existing libraries to save time and focus on core functionality. This roadmap assumes a part-time commitment of 5–10 hours per week.

---

## 📅 Yearly Goals

| **Year** | **Focus**                          | **Key Achievements**                              | **Recommended Tool**       |
|----------|------------------------------------|--------------------------------------------------|----------------------------|
| 1        | Learn C++ and Engine Fundamentals | Build programming skills and 2D experiments      | **VS Code** (Lightweight)  |
| 2        | Build Core Engine Components      | Implement 3D rendering, basic physics, and input | **VS Code** or **Visual Studio** (for debugging) |
| 3        | Expand Functionality              | Add audio, scripting, and create a prototype     | **Visual Studio** (Advanced features) |
| 4+       | Advanced Features and Optimization| Graphics effects, multiplayer, and polish        | **Visual Studio** (Optimization) |

---


## 🔑 Key Extensions/Tools for VS Code

If you choose **VS Code**, here are some essential extensions to enhance your game engine development workflow:

| **Extension/Tool**            | **Purpose**                                                                 |
|--------------------------------|-----------------------------------------------------------------------------|
| **C/C++ Extension**            | Provides IntelliSense (code completion), debugging, and syntax highlighting.|
| **CMake Tools**                | Simplifies CMake project configuration and build management.                |
| **GLSL Lint**                  | Validates and lint GLSL shader code for errors and best practices.          |
| **Lua/Python Extensions**      | Adds support for Lua and Python scripting, including IntelliSense and debugging. |
| **GitLens**                    | Enhances Git integration with features like blame annotations and history.  |
| **Clang-Format**               | Automatically formats C++ code to maintain consistent style.                |
| **Doxygen Documentation Generator** | Simplifies the creation of code documentation using Doxygen.            |

---

### **Why These Extensions?**
- **C/C++ Extension**: Essential for C++ development, offering powerful debugging and IntelliSense features.
- **CMake Tools**: Streamlines build configuration, especially for larger projects.
- **GLSL Lint**: Ensures your shader code is clean and error-free.
- **Lua/Python Extensions**: Enables seamless integration of scripting languages into your engine.
- **GitLens**: Improves version control workflows, making collaboration easier.
- **Clang-Format**: Keeps your codebase clean and consistent.
- **Doxygen Documentation Generator**: Helps you maintain clear and professional documentation.

---

### **How to Install**
1. Open **VS Code**.
2. Go to the **Extensions Marketplace** (Ctrl+Shift+X).
3. Search for the extension name (e.g., "C/C++").
4. Click **Install** and restart VS Code if necessary.

---

These extensions will significantly boost your productivity and make **VS Code** a powerful tool for game engine development. 🚀

---

## 🛠 Year 1: Build the Foundations

### **1. Learn C++ (3–6 months)**
- **Goal:** Master the basics of C++ programming.
- **Tasks:**
  - Learn syntax, OOP principles, and memory management.
  - Practice small projects like a text-based game or a simple calculator.
  - Explore modern C++ features (C++11/14/17/20).
- **Recommended Tool:** **VS Code** (Lightweight and fast for learning).
  - Install the **C/C++ Extension** for IntelliSense and debugging.
- **Resources:**
  - [Learn C++](https://learncpp.com)
  - [C++ Primer (Book)](https://www.amazon.com/C-Primer-Stanley-B-Lippman/dp/0321714113)
  - [Effective Modern C++ (Book)](https://www.amazon.com/Effective-Modern-Specific-Ways-Improve/dp/1491903996)
  - [C++ Programming Tutorial Playlist (The Cherno)](https://www.youtube.com/playlist?list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb)

---

### **2. Study Game Engine Fundamentals (3–6 months)**
- **Goal:** Understand the key components of a game engine.
- **Tasks:**
  - Learn about rendering pipelines, physics, and asset management.
  - Start experimenting with libraries:
    - Use **SDL2** or **GLFW** to create a window and handle input.
    - Use **stb_image.h** to load textures and display a 2D sprite.
  - Build a simple 2D game (e.g., Pong or Breakout).
- **Recommended Tool:** **VS Code** (Lightweight and customizable).
  - Use extensions like **CMake Tools** for build management.
- **Resources:**
  - [SDL2 Documentation](https://wiki.libsdl.org/)
  - [GLFW Documentation](https://www.glfw.org/docs/latest/)
  - [Handmade Hero (YouTube Series)](https://www.youtube.com/c/HandmadeHero)
  - [2D Game Engine Tutorial (The Cherno)](https://www.youtube.com/playlist?list=PLlrATfBNZ98dC-V-N3m0Go4deliWHPFwT)

---

## 🛠 Year 2: Build Core Engine Components

### **1. Rendering System (6 months)**
- **Goal:** Render 3D objects and set up a camera system.
- **Tasks:**
  - Learn a graphics API like **OpenGL** or **Vulkan**.
  - Use **Assimp** to load 3D models (e.g., OBJ or FBX).
  - Add textures using **stb_image.h**.
  - Implement basic lighting (e.g., Phong shading).
- **Milestone:** Render a textured 3D cube with a movable camera and basic lighting.
- **Recommended Tool:** **Visual Studio** (Advanced debugging and profiling for 3D rendering).
  - Use **Visual Studio's GPU Debugging Tools** for OpenGL/Vulkan.
- **Resources:**
  - [OpenGL Tutorials](https://learnopengl.com)
  - [Vulkan Tutorial](https://vulkan-tutorial.com)
  - [The Cherno's OpenGL Series (YouTube)](https://www.youtube.com/playlist?list=PLlrATfBNZ98foTJPJ_Ev03o2oq3-GGOS2)
  - [Vulkan Tutorial Series (Brendan Galea)](https://www.youtube.com/playlist?list=PL8327DO66OH9KBLvI9W6vIy6mh9j7I6Z_)

---

### **2. Physics System (6 months)**
- **Goal:** Simulate collisions and basic rigid body physics.
- **Tasks:**
  - Use **Bullet Physics** for 3D physics simulation.
  - For 2D experiments, try **Box2D**.
  - Implement collision detection and response.
- **Milestone:** Simulate falling objects that collide and respond to forces.
- **Recommended Tool:** **Visual Studio** (Advanced debugging for physics simulations).
- **Resources:**
  - [Bullet Physics Documentation](https://pybullet.org/wordpress/)
  - [Box2D Manual](https://box2d.org/documentation/)
  - [Game Physics Engine Development (Book)](https://www.amazon.com/Game-Physics-Engine-Development-Commercial-Grade/dp/0123819768)
  - [Box2D Tutorial Series (iforce2d)](https://www.youtube.com/playlist?list=PLSlpr6o9vURwq3oxVZSimY8iC-cdd3kIs)

---

## 🛠 Year 3: Expand Functionality

### **1. Input and Audio Systems (3–4 months)**
- **Goal:** Handle user input and add sound effects.
- **Tasks:**
  - Use **SDL2** or **GLFW** for input handling.
  - Add 3D audio using **OpenAL** or **FMOD**.
  - Implement basic sound effects and background music.
- **Milestone:** Enable the player to move and hear sound effects (e.g., footsteps, gunfire).
- **Recommended Tool:** **VS Code** (Lightweight for scripting and audio integration).
- **Resources:**
  - [OpenAL Documentation](https://openal.org/)
  - [FMOD API](https://fmod.com/)
  - [SDL2 Audio Tutorial](https://wiki.libsdl.org/SDL_Audio)
  - [OpenAL Tutorial Series (Victor Gordan)](https://www.youtube.com/playlist?list=PLPaoO-vpZnumO6StgYV6g7Z5Rz1jY7z0L)

---

### **2. Scripting System (3–4 months)**
- **Goal:** Enable gameplay logic scripting.
- **Tasks:**
  - Integrate **Lua** to handle gameplay scripts like enemy spawning or events.
  - Create a simple API to interact with game objects.
  - Implement basic game logic via scripting.
- **Milestone:** Implement basic game logic via scripting.
- **Recommended Tool:** **VS Code** (Great for scripting with Lua/Python extensions).
- **Resources:**
  - [Programming in Lua](https://www.lua.org/pil/)
  - [Sol2 (C++ Lua Binding)](https://github.com/ThePhD/sol2)
  - [Lua Scripting Tutorial (The Cherno)](https://www.youtube.com/watch?v=wBp62mD7sO4)

---

### **3. Prototype a Simple Game (6 months)**
- **Goal:** Combine all components into a playable prototype.
- **Tasks:**
  - Create a single level with basic FPS mechanics.
  - Include one enemy type with simple AI.
  - Use **Recast & Detour** for pathfinding.
  - Use **Dear ImGui** for UI (e.g., debugging or HUD).
- **Milestone:** A playable prototype with basic mechanics.
- **Recommended Tool:** **Visual Studio** (Advanced debugging and optimization for game prototypes).
- **Resources:**
  - [Recast & Detour](https://github.com/recastnavigation/recastnavigation)
  - [Dear ImGui](https://github.com/ocornut/imgui)
  - [Game AI Pro (Book)](https://www.gameaipro.com/)
  - [Dear ImGui Tutorial Series (The Cherno)](https://www.youtube.com/playlist?list=PLlrATfBNZ98dC-V-N3m0Go4deliWHPFwT)

---

## 🛠 Year 4+: Advanced Features and Optimization

### **1. Graphics Enhancements (6–9 months)**
- **Goal:** Add advanced visual effects.
- **Tasks:**
  - Implement features like shadows, reflections, and bloom.
  - Optimize rendering performance with techniques like Level of Detail (LOD).
  - Explore deferred shading or physically-based rendering (PBR).
- **Recommended Tool:** **Visual Studio** (Advanced profiling and debugging for graphics).
- **Resources:**
  - [Real-Time Rendering (Book)](https://www.realtimerendering.com/)
  - [The Cherno's Game Engine Series (YouTube)](https://www.youtube.com/playlist?list=PLlrATfBNZ98dC-V-N3m0Go4deliWHPFwT)
  - [Advanced OpenGL Tutorials (The Cherno)](https://www.youtube.com/playlist?list=PLlrATfBNZ98foTJPJ_Ev03o2oq3-GGOS2)

---

### **2. Networking (Optional, 6–12 months)**
- **Goal:** Enable multiplayer functionality.
- **Tasks:**
  - Use **Enet** or **RakNet** for client-server communication.
  - Sync player actions across multiple clients.
- **Recommended Tool:** **Visual Studio** (Advanced debugging for networking).
- **Resources:**
  - [Enet](http://enet.bespin.org/)
  - [RakNet](https://github.com/OculusVR/RakNet)
  - [Networking Tutorial Series (Brendan Galea)](https://www.youtube.com/playlist?list=PL8327DO66OH9KBLvI9W6vIy6mh9j7I6Z_)

---

### **3. Polish and Optimization**
- Refine performance (physics, rendering, and AI).
- Add additional gameplay systems, like inventory or advanced AI behaviors.
- **Recommended Tool:** **Visual Studio** (Optimization and profiling tools).

---

## 🔧 Key Libraries Summary

| **Component**            | **Library**             | **Purpose**                                       |
|---------------------------|-------------------------|---------------------------------------------------|
| Rendering (3D models)     | OpenGL, Assimp, stb_image.h | Rendering graphics and loading assets           |
| Physics                   | Bullet Physics, Box2D   | Simulating collisions and physics                |
| Input Handling            | SDL2, GLFW             | Processing keyboard, mouse, and gamepad input    |
| Audio                     | OpenAL, FMOD           | Playing sound effects and 3D audio               |
| Scripting                 | Lua, Python            | Gameplay logic                                    |
| Networking (Optional)     | Enet, RakNet           | Multiplayer functionality                        |
| AI Navigation             | Recast & Detour        | Pathfinding and navigation meshes                |
| GUI (Debug/Editor)        | Dear ImGui             | Creating HUDs and debugging UIs                  |

---

## 🎯 Tips for Success
1. **Stay Modular:** Build each system independently and integrate them gradually.
2. **Start Small:** Focus on building a minimal, functional engine before adding advanced features.
3. **Use Open Source for Reference:** Study engines like [Godot](https://godotengine.org/) or [Ogre3D](https://www.ogre3d.org/).
4. **Be Consistent:** Even a few hours a week adds up over time!

---

Good luck with your game engine development journey! 🚀

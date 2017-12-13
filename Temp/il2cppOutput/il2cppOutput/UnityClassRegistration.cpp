template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_Video();
	RegisterModule_Video();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; 
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; 
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class NetworkView; template <> void RegisterClass<NetworkView>();
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; template <> void RegisterClass<VideoPlayer>();
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; 
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>();
class SkinnedMeshRenderer; 
class SpriteMask; 
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>();
class TrailRenderer; 
class Rigidbody; 
class Rigidbody2D; template <> void RegisterClass<Rigidbody2D>();
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; template <> void RegisterClass<AssetBundle>();
class AssetBundleManifest; 
class ScriptedImporter; 
class StyleSheetImporter; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class GameObjectRecorder; 
class LightProbes; 
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; 
class AnimationClip; 
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; 
class AnimatorController; 
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; template <> void RegisterClass<BaseVideoTexture>();
class MovieTexture; 
class WebCamTexture; template <> void RegisterClass<WebCamTexture>();
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; template <> void RegisterClass<VideoClip>();
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class PerformanceReportingManager; template <> void RegisterClass<PerformanceReportingManager>();
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAnalyticsManager; template <> void RegisterClass<UnityAnalyticsManager>();
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class NScreenBridge; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 81 non stripped classes
	//0. AssetBundle
	RegisterClass<AssetBundle>();
	//1. NamedObject
	RegisterClass<NamedObject>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Behaviour
	RegisterClass<Behaviour>();
	//4. Unity::Component
	RegisterClass<Unity::Component>();
	//5. Camera
	RegisterClass<Camera>();
	//6. GameObject
	RegisterClass<GameObject>();
	//7. QualitySettings
	RegisterClass<QualitySettings>();
	//8. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//9. GameManager
	RegisterClass<GameManager>();
	//10. Renderer
	RegisterClass<Renderer>();
	//11. GUILayer
	RegisterClass<GUILayer>();
	//12. Light
	RegisterClass<Light>();
	//13. Mesh
	RegisterClass<Mesh>();
	//14. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//15. NetworkView
	RegisterClass<NetworkView>();
	//16. Shader
	RegisterClass<Shader>();
	//17. Material
	RegisterClass<Material>();
	//18. Sprite
	RegisterClass<Sprite>();
	//19. SpriteRenderer
	RegisterClass<SpriteRenderer>();
	//20. Texture
	RegisterClass<Texture>();
	//21. Texture2D
	RegisterClass<Texture2D>();
	//22. RenderTexture
	RegisterClass<RenderTexture>();
	//23. Transform
	RegisterClass<Transform>();
	//24. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//25. Collider
	RegisterClass<Collider>();
	//26. BoxCollider
	RegisterClass<BoxCollider>();
	//27. SphereCollider
	RegisterClass<SphereCollider>();
	//28. MeshCollider
	RegisterClass<MeshCollider>();
	//29. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//30. Rigidbody2D
	RegisterClass<Rigidbody2D>();
	//31. AudioClip
	RegisterClass<AudioClip>();
	//32. SampleClip
	RegisterClass<SampleClip>();
	//33. AudioSource
	RegisterClass<AudioSource>();
	//34. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//35. WebCamTexture
	RegisterClass<WebCamTexture>();
	//36. BaseVideoTexture
	RegisterClass<BaseVideoTexture>();
	//37. Animator
	RegisterClass<Animator>();
	//38. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//39. UI::Canvas
	RegisterClass<UI::Canvas>();
	//40. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//41. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//42. VideoPlayer
	RegisterClass<VideoPlayer>();
	//43. Collider2D
	RegisterClass<Collider2D>();
	//44. MeshRenderer
	RegisterClass<MeshRenderer>();
	//45. PreloadData
	RegisterClass<PreloadData>();
	//46. Cubemap
	RegisterClass<Cubemap>();
	//47. Texture3D
	RegisterClass<Texture3D>();
	//48. Texture2DArray
	RegisterClass<Texture2DArray>();
	//49. MeshFilter
	RegisterClass<MeshFilter>();
	//50. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//51. MonoScript
	RegisterClass<MonoScript>();
	//52. TextAsset
	RegisterClass<TextAsset>();
	//53. NetworkManager
	RegisterClass<NetworkManager>();
	//54. AudioManager
	RegisterClass<AudioManager>();
	//55. PhysicsManager
	RegisterClass<PhysicsManager>();
	//56. PlayerSettings
	RegisterClass<PlayerSettings>();
	//57. BuildSettings
	RegisterClass<BuildSettings>();
	//58. InputManager
	RegisterClass<InputManager>();
	//59. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//60. TimeManager
	RegisterClass<TimeManager>();
	//61. TagManager
	RegisterClass<TagManager>();
	//62. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//63. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//64. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//65. ResourceManager
	RegisterClass<ResourceManager>();
	//66. MonoManager
	RegisterClass<MonoManager>();
	//67. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//68. PerformanceReportingManager
	RegisterClass<PerformanceReportingManager>();
	//69. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//70. ScriptMapper
	RegisterClass<ScriptMapper>();
	//71. UnityAnalyticsManager
	RegisterClass<UnityAnalyticsManager>();
	//72. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//73. RenderSettings
	RegisterClass<RenderSettings>();
	//74. LevelGameManager
	RegisterClass<LevelGameManager>();
	//75. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>();
	//76. VideoClip
	RegisterClass<VideoClip>();
	//77. ParticleSystem
	RegisterClass<ParticleSystem>();
	//78. LightmapSettings
	RegisterClass<LightmapSettings>();
	//79. AudioListener
	RegisterClass<AudioListener>();
	//80. FlareLayer
	RegisterClass<FlareLayer>();

}

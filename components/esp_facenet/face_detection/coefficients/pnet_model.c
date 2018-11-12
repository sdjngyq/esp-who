//Generated by mkmodel
#include "/home/gongxiaochao/code/esp/esp-who/components/esp_facenet/face_detection/coefficients/pnet_model.h"


const static int det_win_list[]={
	6, 
};

const static fptp_t det_thresh_list[]={
	0.980, 0.960, 
};

const static char *wake_word_list[]={
	"mtcnn", 
};

const static model_info_t model_info={
	.word_num=1,
	.word_list=(char **)(&wake_word_list[0]),
	.win_list=(int *)(&det_win_list[0]),
	.thresh_list=(fptp_t *)(&det_thresh_list[0]),
	.info_str="pNet_v0_mtcnn_6_0.98_0.96",
};

const static fptp_t pnet_l1_mn_bias_item_array[]={
	-1.354423f, 0.244894f, 2.522750f, -2.972327f, 3.443390f, -3.431040f, -3.117855f, 0.108239f, 
	0.155803f, 2.247187f, 
};

const static dl_matrix3d_t pnet_l1_mn_bias={
	.w=1,
	.h=1,
	.c=10,
	.n=1,
	.stride=10,
	.item=(fptp_t *)(&pnet_l1_mn_bias_item_array[0])
};

const static fptp_t pnet_l1_mn_compress_item_array[]={
	0.020575f, 0.287156f, -0.010751f, 0.004686f, -0.008925f, -0.084112f, 0.028383f, 0.187816f, 
	-0.187827f, -0.157176f, -0.218136f, 0.163081f, -0.089305f, -0.156210f, 0.053980f, 0.053836f, 
	0.180193f, -0.186133f, 0.054773f, -0.120995f, 0.202855f, -0.156161f, 0.141443f, -0.238627f, 
	-0.236396f, -0.233091f, 0.112321f, -0.096864f, 0.196300f, -0.335695f, 
};

const static dl_matrix3d_t pnet_l1_mn_compress={
	.w=1,
	.h=1,
	.c=3,
	.n=10,
	.stride=3,
	.item=(fptp_t *)(&pnet_l1_mn_compress_item_array[0])
};

const static fptp_t pnet_l1_mn_depth_item_array[]={
	-0.130027f, 0.109343f, 0.026974f, -0.165334f, 0.150543f, 0.069832f, -0.081451f, 0.079600f, 
	0.054342f, 0.071178f, -0.003665f, 0.002008f, 0.090032f, 0.018528f, 0.023701f, 0.065202f, 
	-0.025062f, -0.020984f, -0.109843f, 0.158886f, 0.168277f, -0.136675f, 0.183639f, 0.210978f, 
	-0.103343f, 0.071907f, 0.059154f, 
};

const static dl_matrix3d_t pnet_l1_mn_depth={
	.w=3,
	.h=3,
	.c=3,
	.n=1,
	.stride=9,
	.item=(fptp_t *)(&pnet_l1_mn_depth_item_array[0])
};

const static fptp_t pnet_l1_mn_depth_active_prelu_alpha_item_array[]={
	0.863595f, -1.450910f, 0.918979f, 
};

const static dl_matrix3d_t pnet_l1_mn_depth_active_prelu_alpha={
	.w=1,
	.h=1,
	.c=3,
	.n=1,
	.stride=3,
	.item=(fptp_t *)(&pnet_l1_mn_depth_active_prelu_alpha_item_array[0])
};

const static fptp_t pnet_l2_mn_bias_item_array[]={
	0.202498f, 0.460261f, 0.882798f, 0.259637f, 0.279947f, 0.121907f, -0.552261f, -0.386244f, 
	-0.081849f, 0.259614f, 0.544148f, 0.306997f, -0.036854f, 0.199427f, 0.255121f, 0.296807f, 
};

const static dl_matrix3d_t pnet_l2_mn_bias={
	.w=1,
	.h=1,
	.c=16,
	.n=1,
	.stride=16,
	.item=(fptp_t *)(&pnet_l2_mn_bias_item_array[0])
};

const static fptp_t pnet_l2_mn_compress_item_array[]={
	-0.065444f, -0.213598f, 0.156249f, -0.400332f, 0.257624f, 0.195319f, -0.002585f, -0.027977f, 
	-0.161666f, -0.036060f, -0.101592f, 0.044987f, -0.374667f, 0.156418f, 0.017275f, -0.060171f, 
	-0.131496f, 0.106885f, -0.274254f, -0.350350f, 0.785404f, -0.149298f, 0.032092f, -0.312277f, 
	0.058039f, 0.088308f, 0.148962f, -0.021952f, 0.058152f, -0.010025f, 0.097891f, 0.084944f, 
	0.138877f, -0.047342f, 0.071281f, -0.497846f, -0.077066f, -0.086898f, -0.023699f, 0.146365f, 
	0.145325f, 0.075962f, 0.146588f, 0.016178f, -0.018449f, -0.331625f, -0.167922f, -0.072432f, 
	-0.030803f, -0.027451f, -0.270314f, -0.100639f, -0.282767f, 0.323057f, 0.041764f, -0.112095f, 
	0.295311f, 0.054733f, -0.177911f, 0.050699f, -0.198410f, -0.420785f, 0.048099f, -0.033088f, 
	0.076663f, 0.061728f, -0.119201f, 0.003159f, -0.012363f, 0.038966f, -0.046279f, -0.094465f, 
	0.042975f, 0.420468f, -0.016302f, -0.048084f, 0.680159f, 0.513728f, 0.294384f, 0.062716f, 
	-0.368386f, 0.178787f, 0.011547f, 0.139286f, 0.277468f, -0.148557f, 0.136731f, -0.097445f, 
	-0.019640f, -0.061302f, 0.182033f, 0.165677f, -0.063883f, 0.444091f, -0.159468f, -0.134677f, 
	-0.120975f, 0.261890f, 0.056192f, -0.116765f, -0.156810f, -0.136083f, 0.126123f, -0.070401f, 
	-0.204127f, 0.001317f, 0.090436f, -0.001466f, 0.047641f, 0.096803f, -0.324148f, -0.144573f, 
	-0.232169f, -0.211376f, -0.077722f, -0.151341f, -0.164655f, 0.059827f, -0.477161f, -0.198982f, 
	-0.638335f, -0.316910f, -0.193780f, -0.290925f, 0.010097f, 0.086403f, -0.217540f, 0.077471f, 
	-0.097634f, -0.106646f, -0.148202f, 0.095191f, 0.107018f, -0.278652f, -0.110702f, 0.225254f, 
	-0.040521f, 0.030555f, -0.001150f, -0.137757f, -0.265636f, -0.113877f, -0.139300f, -0.097094f, 
	0.068731f, 0.239458f, 0.248326f, 0.048982f, 0.010797f, 0.013886f, -0.255227f, 0.295264f, 
	0.038079f, 0.202590f, -0.116089f, -0.209928f, -0.059440f, -0.065731f, -0.009887f, -0.061055f, 
};

const static dl_matrix3d_t pnet_l2_mn_compress={
	.w=1,
	.h=1,
	.c=10,
	.n=16,
	.stride=10,
	.item=(fptp_t *)(&pnet_l2_mn_compress_item_array[0])
};

const static fptp_t pnet_l2_mn_depth_item_array[]={
	0.048805f, -0.109514f, 0.178865f, -0.126553f, 0.204594f, 0.116594f, -0.134016f, -0.058992f, 
	-0.043120f, -0.128853f, 0.103256f, -0.299665f, -0.454762f, -0.164709f, -0.076648f, -0.101174f, 
	0.104612f, -0.317550f, 0.127665f, 0.275402f, -0.607693f, -0.127084f, 0.067163f, -0.094263f, 
	-0.204792f, -0.172947f, -0.089792f, -0.064963f, -0.240673f, -0.079726f, -0.309441f, 0.015150f, 
	0.124121f, 0.160470f, 0.154808f, 0.105923f, -0.202246f, 0.161117f, -0.183840f, -0.153217f, 
	-0.397473f, 0.193917f, -0.030204f, 0.437167f, -0.009326f, -0.020336f, 0.083012f, 0.333542f, 
	0.202479f, 0.195733f, -0.173967f, 0.022763f, 0.094986f, 0.074061f, -0.130047f, -0.063219f, 
	-0.366683f, 0.117934f, -0.285532f, -0.100304f, -0.006992f, 0.067230f, -0.242966f, -0.093540f, 
	0.080330f, 0.172134f, 0.106547f, -0.076067f, 0.158406f, -0.098204f, 0.065417f, 0.008766f, 
	0.350182f, -0.186894f, -0.013554f, 0.214958f, 0.117451f, -0.087511f, -0.040656f, 0.391481f, 
	-0.010780f, 0.015945f, 0.140125f, -0.008176f, -0.015587f, -0.318817f, 0.295557f, -0.047909f, 
	0.290349f, -0.198012f, 
};

const static dl_matrix3d_t pnet_l2_mn_depth={
	.w=3,
	.h=3,
	.c=10,
	.n=1,
	.stride=30,
	.item=(fptp_t *)(&pnet_l2_mn_depth_item_array[0])
};

const static fptp_t pnet_l2_mn_depth_active_prelu_alpha_item_array[]={
	0.036098f, 0.104878f, -0.101387f, 0.037354f, -0.159628f, -0.165952f, 0.176098f, 0.038011f, 
	-0.822136f, -0.135613f, 
};

const static dl_matrix3d_t pnet_l2_mn_depth_active_prelu_alpha={
	.w=1,
	.h=1,
	.c=10,
	.n=1,
	.stride=10,
	.item=(fptp_t *)(&pnet_l2_mn_depth_active_prelu_alpha_item_array[0])
};

const static fptp_t pnet_l3_mn_bias_item_array[]={
	0.080103f, 0.061528f, 0.006453f, 0.146844f, 0.230578f, 0.001349f, 0.057378f, 0.096859f, 
	-0.022499f, 0.017159f, 0.175691f, 0.112369f, 0.052674f, 0.126138f, 0.110372f, 0.236990f, 
	0.143844f, 0.154598f, 0.072755f, 0.259237f, 0.182590f, 0.301263f, 0.168381f, 0.083037f, 
	0.183655f, 0.216660f, 0.119847f, 0.183357f, 0.014001f, 0.252487f, 0.064845f, 0.087851f, 
};

const static dl_matrix3d_t pnet_l3_mn_bias={
	.w=1,
	.h=1,
	.c=32,
	.n=1,
	.stride=32,
	.item=(fptp_t *)(&pnet_l3_mn_bias_item_array[0])
};

const static fptp_t pnet_l3_mn_compress_item_array[]={
	-0.080702f, -0.061392f, 0.001453f, -0.063017f, -0.019295f, -0.041393f, 0.171935f, -0.096121f, 
	-0.045311f, 0.057303f, -0.072251f, 0.135261f, -0.059192f, -0.023685f, 0.052297f, -0.181451f, 
	-0.052641f, 0.077325f, 0.064248f, 0.224122f, 0.144737f, 0.180146f, 0.288698f, 0.045487f, 
	-0.155799f, -0.033686f, 0.087098f, -0.084829f, -0.090582f, -0.034447f, -0.025285f, -0.136619f, 
	0.105235f, 0.096875f, 0.267701f, -0.059708f, -0.015638f, -0.260533f, -0.118325f, -0.136924f, 
	0.072459f, -0.190994f, 0.034959f, -0.470079f, 0.125787f, 0.092383f, -0.182278f, 0.054310f, 
	0.188180f, 0.244252f, 0.248238f, -0.077026f, 0.197660f, 0.001860f, 0.124400f, 0.145690f, 
	-0.066064f, 0.011797f, 0.031092f, -0.020147f, 0.042597f, 0.152530f, -0.073355f, 0.142847f, 
	-0.305679f, -0.322360f, -0.421676f, -0.211091f, -0.293689f, 0.107349f, 0.009743f, 0.157679f, 
	-0.053917f, 0.121014f, 0.101176f, 0.628252f, -0.219219f, -0.166348f, 0.159977f, -0.049421f, 
	0.195613f, 0.138250f, 0.076048f, -0.018784f, 0.218617f, 0.067999f, -0.335368f, -0.134730f, 
	-0.073388f, 0.030527f, -0.258209f, -0.292601f, -0.029483f, -0.114349f, -0.100135f, -0.039097f, 
	-0.161122f, -0.070244f, 0.171912f, 0.049405f, 0.008683f, 0.026748f, 0.171813f, -0.033316f, 
	-0.059324f, -0.035547f, -0.105614f, 0.385174f, -0.131601f, 0.056160f, 0.084748f, -0.120987f, 
	-0.003364f, -0.041152f, -0.002895f, -0.083358f, -0.073842f, -0.021111f, -0.017793f, -0.136887f, 
	0.030487f, 0.002948f, 0.009600f, 0.293377f, -0.053440f, -0.074451f, -0.111958f, 0.075813f, 
	0.085353f, 0.116988f, 0.097956f, -0.050131f, -0.114198f, -0.033453f, 0.005250f, -0.081495f, 
	-0.002573f, -0.057187f, 0.092003f, -0.425950f, 0.028148f, -0.155497f, -0.095585f, 0.157582f, 
	0.000566f, -0.024317f, 0.017575f, -0.062752f, 0.152300f, -0.020107f, -0.535076f, -0.027669f, 
	0.019462f, 0.004717f, -0.321939f, 0.018958f, 0.077895f, 0.180849f, 0.119692f, -0.120003f, 
	0.161472f, -0.050099f, 0.076416f, 0.079824f, -0.164571f, 0.133784f, 0.109462f, -0.184437f, 
	0.000875f, -0.061145f, -0.003474f, 0.301528f, 0.150177f, 0.021387f, 0.212101f, 0.021155f, 
	-0.010677f, -0.081309f, 0.040639f, -0.226449f, -0.014247f, 0.091243f, 0.204264f, -0.174468f, 
	0.002180f, -0.095142f, -0.128059f, 0.332828f, 0.155594f, -0.159109f, -0.078411f, 0.041380f, 
	-0.088998f, 0.022907f, 0.186494f, -0.071473f, -0.085959f, -0.387442f, 0.011583f, 0.563865f, 
	-0.251301f, -0.055981f, -0.124181f, -0.741095f, -0.265314f, 0.242476f, -0.128530f, 0.180185f, 
	-0.103973f, 0.019478f, -0.154668f, 0.121935f, 0.131959f, 0.123574f, 0.004663f, -0.316702f, 
	0.001464f, 0.133097f, 0.091347f, 0.004531f, -0.008235f, -0.211380f, 0.201582f, -0.239420f, 
	0.001501f, 0.239871f, 0.133418f, -0.182341f, -0.073758f, 0.180056f, -0.254791f, -0.381787f, 
	0.281806f, -0.004486f, 0.416933f, 0.119030f, 0.220279f, -0.099892f, -0.196029f, 0.212077f, 
	-0.133883f, -0.364900f, 0.140934f, -0.203554f, -0.356554f, -0.233659f, -0.092961f, 0.045290f, 
	0.145018f, 0.009190f, -0.030594f, 0.200562f, -0.100130f, -0.009013f, 0.164108f, 0.270068f, 
	0.194479f, 0.131458f, 0.011562f, -0.104974f, -0.121907f, 0.222383f, -0.070365f, 0.031238f, 
	0.141847f, -0.138168f, -0.092097f, 0.204417f, 0.083806f, -0.030681f, 0.058504f, -0.027639f, 
	-0.287460f, -0.215731f, -0.164035f, 0.280946f, 0.157134f, 0.006950f, 0.090085f, -0.031346f, 
	-0.172916f, -0.029857f, -0.446076f, 0.172802f, -0.169440f, -0.127618f, 0.338560f, -0.393689f, 
	0.064510f, -0.005888f, -0.140167f, -0.124879f, -0.049339f, 0.003548f, -0.441281f, -0.163494f, 
	0.011200f, 0.126636f, 0.013568f, -0.001217f, -0.050195f, 0.011254f, -0.074770f, 0.011746f, 
	-0.337539f, -0.297387f, -0.186364f, 0.000757f, -0.308302f, 0.102999f, -0.090945f, 0.205567f, 
	-0.069232f, 0.401336f, -0.143199f, 0.563601f, -0.086337f, -0.273882f, -0.069277f, -0.075402f, 
	-0.238330f, -0.193785f, 0.010585f, -0.053063f, -0.052070f, -0.053940f, 0.035552f, -0.158187f, 
	0.062756f, -0.119492f, -0.018758f, 0.286552f, 0.002026f, -0.221962f, 0.021741f, -0.043603f, 
	-0.327057f, -0.659287f, -0.267099f, 0.120378f, -0.132653f, -0.070477f, 0.353740f, 0.122169f, 
	-0.050723f, 0.188884f, -0.169976f, 0.290609f, -0.151018f, -0.202772f, 0.225135f, 0.033377f, 
	-0.165901f, -0.145713f, -0.051243f, -0.165595f, -0.220597f, -0.008666f, -0.150013f, 0.044407f, 
	0.044577f, 0.144808f, -0.053183f, 0.299806f, -0.077634f, -0.110809f, -0.049209f, 0.127227f, 
	0.047118f, -0.063284f, -0.040570f, -0.242842f, 0.016524f, -0.295574f, -0.047231f, -0.134611f, 
	0.245388f, 0.281149f, 0.113256f, 0.068367f, -0.062727f, -0.126409f, -0.071061f, -0.004641f, 
	-0.130670f, -0.110428f, 0.135986f, -0.232111f, -0.204766f, -0.186817f, 0.654776f, 0.228731f, 
	-0.056411f, -0.087793f, 0.004175f, 0.043710f, -0.194762f, 0.053405f, -0.358598f, 0.286133f, 
	-0.156460f, -0.339617f, 0.180358f, 0.017471f, 0.001189f, -0.112399f, 0.256020f, -0.028108f, 
	0.158331f, -0.063684f, -0.007447f, 0.243244f, -0.098299f, -0.035096f, 0.165762f, 0.059878f, 
	-0.033530f, -0.179785f, -0.114929f, -0.017279f, -0.032039f, 0.147458f, -0.250239f, -0.097288f, 
	0.126599f, 0.244382f, 0.181232f, -0.289722f, -0.035627f, -0.202169f, -0.049922f, 0.019054f, 
	-0.125976f, -0.228518f, -0.244061f, 0.030396f, -0.213538f, 0.110441f, 0.094248f, 0.060026f, 
	-0.062246f, 0.063714f, -0.187158f, 0.016864f, -0.084556f, -0.166127f, 0.133426f, 0.103737f, 
	0.141439f, 0.336359f, 0.327926f, 0.022011f, 0.145372f, 0.169107f, 0.169156f, -0.324234f, 
	-0.052516f, -0.169655f, 0.226651f, -0.256597f, 0.216862f, -0.050304f, -0.168283f, 0.100860f, 
	-0.098729f, -0.272138f, -0.218682f, -0.352187f, -0.238462f, 0.028812f, 0.104367f, 0.033340f, 
	0.114546f, -0.105935f, -0.074849f, -0.223115f, -0.155423f, -0.109386f, -0.045613f, 0.287894f, 
	0.143223f, 0.111243f, 0.011573f, -0.059511f, 0.138984f, 0.223280f, 0.315082f, -0.142696f, 
	-0.224856f, -0.367457f, -0.218328f, 0.085537f, 0.140473f, -0.254131f, -0.290518f, -0.017061f, 
	0.070645f, -0.011796f, 0.002811f, -0.067732f, -0.060025f, -0.008198f, -0.271256f, -0.321187f, 
	0.178802f, -0.156242f, 0.063666f, -0.495575f, 0.083438f, 0.000540f, -0.015256f, -0.008309f, 
};

const static dl_matrix3d_t pnet_l3_mn_compress={
	.w=1,
	.h=1,
	.c=16,
	.n=32,
	.stride=16,
	.item=(fptp_t *)(&pnet_l3_mn_compress_item_array[0])
};

const static fptp_t pnet_l3_mn_depth_item_array[]={
	0.139017f, 0.149251f, 0.114404f, -0.006600f, -0.029675f, 0.021857f, -0.050210f, -0.124779f, 
	-0.180377f, 0.288290f, -0.000859f, 0.290742f, -0.098034f, 0.018811f, -0.048009f, 0.118325f, 
	0.266262f, 0.182593f, -0.380323f, 0.064420f, -0.234098f, -0.129241f, 0.308630f, -0.535199f, 
	-0.130509f, -0.090096f, 0.057661f, 0.229796f, -0.185177f, -0.251407f, 0.029952f, -0.094774f, 
	0.124953f, 0.224810f, 0.436336f, 0.205017f, 0.061025f, -0.052617f, -0.255924f, -0.478605f, 
	0.071593f, -0.095345f, 0.077074f, 0.171633f, -0.172258f, -0.237573f, 0.040755f, 0.172550f, 
	0.016322f, 0.263702f, -0.009272f, 0.050454f, 0.023708f, 0.186346f, -0.125228f, -0.032322f, 
	0.394549f, 0.376936f, 0.248182f, 0.055051f, 0.015820f, 0.068810f, 0.039174f, 0.131289f, 
	0.012292f, 0.187274f, -0.163766f, 0.218160f, -0.062230f, 0.179378f, 0.263600f, -0.015611f, 
	0.259309f, -0.078720f, 0.277952f, -0.203815f, 0.246009f, 0.304043f, 0.229302f, -0.240298f, 
	-0.044686f, 0.190775f, 0.024216f, 0.204516f, 0.230321f, 0.289072f, -0.215587f, -0.064081f, 
	0.084089f, -0.007395f, 0.103247f, -0.103562f, 0.090286f, 0.325198f, -0.037795f, 0.057324f, 
	0.195682f, 0.156094f, -0.060094f, 0.061165f, -0.106019f, 0.106800f, -0.060550f, -0.054845f, 
	-0.169993f, 0.209361f, -0.136677f, 0.811169f, -0.154357f, -0.033551f, 0.155439f, -0.135908f, 
	0.081873f, 0.266518f, 0.320732f, 0.068845f, -0.029427f, 0.051852f, 0.100274f, 0.033285f, 
	-0.099694f, -0.038394f, -0.128655f, 0.468598f, -0.099621f, 0.082065f, 0.256820f, -0.192752f, 
	0.151542f, 0.193866f, -0.215461f, 0.042654f, 0.388140f, -0.080775f, -0.056000f, -0.012717f, 
	-0.086572f, -0.086518f, -0.114606f, 0.496422f, -0.151379f, -0.077412f, -0.193760f, 0.315785f, 
};

const static dl_matrix3d_t pnet_l3_mn_depth={
	.w=3,
	.h=3,
	.c=16,
	.n=1,
	.stride=48,
	.item=(fptp_t *)(&pnet_l3_mn_depth_item_array[0])
};

const static fptp_t pnet_l3_mn_depth_active_prelu_alpha_item_array[]={
	0.450601f, 0.227872f, 0.512759f, 0.206575f, -0.488781f, -0.240455f, 0.246003f, -0.021997f, 
	1.236510f, 0.263137f, -6.648679f, 0.035336f, -1.310179f, -0.285863f, 3.624997f, 0.732915f, 
};

const static dl_matrix3d_t pnet_l3_mn_depth_active_prelu_alpha={
	.w=1,
	.h=1,
	.c=16,
	.n=1,
	.stride=16,
	.item=(fptp_t *)(&pnet_l3_mn_depth_active_prelu_alpha_item_array[0])
};

const static fptp_t pnet_l4_category_cnn_bias_item_array[]={
	0.228522f, -0.028523f, 
};

const static dl_matrix3d_t pnet_l4_category_cnn_bias={
	.w=1,
	.h=1,
	.c=2,
	.n=1,
	.stride=2,
	.item=(fptp_t *)(&pnet_l4_category_cnn_bias_item_array[0])
};

const static fptp_t pnet_l4_category_cnn_weight_item_array[]={
	0.206965f, -0.339345f, -0.511932f, -0.506167f, 1.358336f, -0.180835f, 0.281752f, 0.144059f, 
	-0.195212f, -0.150344f, 0.042966f, 0.289131f, -0.151313f, -0.062399f, -0.485845f, 1.071706f, 
	-0.134025f, 1.116197f, 0.126307f, 1.589720f, 0.625953f, 1.378263f, 0.484575f, 0.190291f, 
	0.745577f, 0.822871f, 0.234373f, 0.643466f, -0.835051f, 0.959420f, -0.308678f, -0.180465f, 
	-0.211010f, 0.194743f, 0.607015f, 0.533738f, -1.523634f, 0.336346f, -0.314227f, -0.093048f, 
	0.373181f, -0.099139f, -0.076400f, -0.037010f, 0.068020f, 0.170578f, 0.622576f, -0.972613f, 
	0.066708f, -0.970957f, -0.062155f, -1.851308f, -0.556095f, -1.483841f, -0.533408f, -0.151777f, 
	-0.740517f, -0.725226f, -0.282307f, -0.523856f, 0.848194f, -1.060340f, 0.149405f, 0.424265f, 
};

const static dl_matrix3d_t pnet_l4_category_cnn_weight={
	.w=1,
	.h=1,
	.c=32,
	.n=2,
	.stride=32,
	.item=(fptp_t *)(&pnet_l4_category_cnn_weight_item_array[0])
};

const static fptp_t pnet_l4_landmark_cnn_bias_item_array[]={
	0.213279f, 0.224216f, 0.189745f, 0.364337f, 0.274240f, 0.291025f, 0.321742f, 0.209306f, 
	0.287003f, 0.338161f, 
};

const static dl_matrix3d_t pnet_l4_landmark_cnn_bias={
	.w=1,
	.h=1,
	.c=10,
	.n=1,
	.stride=10,
	.item=(fptp_t *)(&pnet_l4_landmark_cnn_bias_item_array[0])
};

const static fptp_t pnet_l4_landmark_cnn_weight_item_array[]={
	0.048146f, 0.075199f, 0.023474f, 0.114913f, -0.045672f, -0.011875f, -0.011993f, -0.006840f, 
	-0.028468f, -0.005897f, 0.053412f, 0.100647f, 0.012799f, 0.075974f, -0.037961f, 0.047423f, 
	-0.004856f, -0.010118f, -0.058215f, -0.034496f, 0.036323f, 0.033821f, -0.043513f, 0.008220f, 
	0.250299f, 0.281897f, -0.114402f, 0.018660f, 0.143664f, 0.116595f, 0.126261f, 0.071638f, 
	-0.021159f, -0.060285f, 0.052017f, 0.082011f, 0.005329f, 0.066490f, -0.016752f, 0.064052f, 
	0.091287f, -0.013467f, 0.007349f, 0.038112f, -0.236955f, 0.005298f, 0.136372f, 0.099844f, 
	-0.027803f, -0.085990f, 0.070001f, 0.035495f, 0.085573f, -0.129707f, 0.055776f, 0.058043f, 
	-0.127798f, 0.130210f, 0.115205f, 0.042979f, 0.103443f, 0.142581f, -0.029918f, 0.137202f, 
	-0.042863f, -0.055146f, 0.202655f, 0.202138f, 0.002285f, 0.067461f, -0.027215f, 0.014873f, 
	0.036080f, 0.092516f, 0.077019f, 0.124716f, 0.142207f, -0.066195f, 0.157479f, 0.135163f, 
	0.120526f, -0.203128f, 0.074518f, -0.095583f, -0.018499f, 0.119915f, 0.041698f, 0.071162f, 
	0.198269f, 0.103463f, 0.124258f, -0.053490f, 0.022013f, 0.173811f, 0.031164f, 0.166837f, 
	-0.062787f, 0.051900f, -0.041679f, 0.073939f, -0.003695f, -0.003998f, -0.101469f, -0.014535f, 
	-0.035477f, 0.024254f, 0.250826f, -0.004157f, 0.017353f, 0.253463f, 0.301831f, 0.093336f, 
	0.179226f, -0.209231f, 0.022201f, 0.125226f, -0.019096f, -0.074485f, 0.015903f, -0.025869f, 
	-0.115816f, 0.154657f, 0.099667f, -0.015397f, 0.024905f, 0.057347f, 0.021585f, 0.110036f, 
	-0.048389f, 0.142550f, 0.048037f, 0.204016f, -0.127240f, -0.024229f, 0.006827f, 0.022588f, 
	0.016799f, -0.131060f, 0.213327f, -0.043870f, 0.054874f, -0.093396f, 0.091450f, 0.168754f, 
	0.019774f, 0.047222f, -0.028196f, -0.028432f, 0.071089f, -0.070574f, 0.013208f, -0.038468f, 
	0.236115f, 0.154008f, 0.169371f, 0.109027f, 0.151147f, -0.010700f, -0.024017f, 0.046239f, 
	0.009954f, 0.103677f, -0.044245f, 0.117398f, 0.012325f, 0.017054f, 0.016443f, 0.033421f, 
	-0.033599f, -0.038415f, 0.149179f, 0.006119f, -0.159514f, 0.079287f, 0.166854f, 0.017952f, 
	0.125196f, 0.001571f, 0.006913f, 0.035348f, -0.012530f, -0.040370f, 0.011722f, 0.060274f, 
	-0.043357f, 0.092665f, 0.017642f, 0.060614f, 0.106253f, -0.021038f, 0.006315f, 0.151665f, 
	0.044375f, 0.154506f, -0.002827f, 0.291160f, 0.035297f, -0.080623f, 0.034696f, -0.044128f, 
	-0.027331f, -0.061077f, 0.230957f, 0.086638f, 0.121366f, 0.203126f, 0.007488f, 0.012595f, 
	0.174258f, 0.023789f, -0.020183f, 0.007284f, -0.066894f, -0.044857f, -0.031850f, -0.075541f, 
	0.283527f, 0.237645f, -0.063815f, 0.102423f, 0.191061f, 0.050335f, 0.007428f, 0.023432f, 
	0.011477f, 0.066144f, -0.057418f, -0.095684f, -0.033425f, 0.021219f, 0.022981f, -0.036339f, 
	0.021137f, -0.011725f, 0.163106f, 0.103826f, -0.167454f, 0.251995f, 0.187634f, -0.074631f, 
	0.049984f, 0.082598f, -0.043268f, -0.056193f, 0.051211f, 0.099980f, -0.019390f, 0.033581f, 
	0.052404f, 0.074424f, 0.027522f, -0.114602f, 0.054472f, 0.039087f, 0.097617f, -0.025291f, 
	-0.029751f, 0.156902f, 0.084135f, 0.309991f, 0.082625f, 0.039089f, -0.013838f, 0.014466f, 
	0.066327f, 0.053398f, 0.163659f, 0.031271f, 0.269629f, 0.067919f, 0.231178f, 0.129181f, 
	0.214161f, -0.149794f, 0.029091f, -0.044817f, -0.018204f, -0.055288f, 0.080571f, -0.015934f, 
	0.172264f, 0.115608f, 0.051793f, 0.053289f, 0.123160f, 0.240351f, -0.041029f, 0.078592f, 
	0.030799f, 0.158024f, 0.093600f, 0.219453f, 0.124561f, -0.093146f, 0.040159f, -0.008529f, 
	-0.016785f, -0.043403f, 0.167597f, 0.024501f, -0.187924f, 0.131563f, 0.164742f, -0.068747f, 
	0.247120f, 0.102732f, -0.037480f, 0.004704f, 0.017169f, 0.093415f, -0.026582f, -0.033139f, 
	-0.019758f, 0.031932f, 0.094534f, 0.096124f, 0.192902f, -0.050378f, -0.033428f, 0.015432f, 
};

const static dl_matrix3d_t pnet_l4_landmark_cnn_weight={
	.w=1,
	.h=1,
	.c=32,
	.n=10,
	.stride=32,
	.item=(fptp_t *)(&pnet_l4_landmark_cnn_weight_item_array[0])
};

const static fptp_t pnet_l4_offset_cnn_bias_item_array[]={
	0.088323f, 0.048011f, -0.015031f, 0.023137f, 
};

const static dl_matrix3d_t pnet_l4_offset_cnn_bias={
	.w=1,
	.h=1,
	.c=4,
	.n=1,
	.stride=4,
	.item=(fptp_t *)(&pnet_l4_offset_cnn_bias_item_array[0])
};

const static fptp_t pnet_l4_offset_cnn_weight_item_array[]={
	-0.045777f, -0.096979f, 0.072474f, 0.037243f, -0.023693f, -0.008061f, -0.027053f, -0.000425f, 
	0.023398f, 0.064308f, 0.119531f, 0.023918f, 0.038588f, -0.053410f, -0.121137f, 0.095833f, 
	0.080970f, 0.106086f, -0.016415f, -0.245432f, 0.082972f, -0.062280f, -0.034550f, -0.144379f, 
	-0.075720f, 0.003535f, -0.078288f, 0.086779f, -0.072128f, 0.222890f, 0.145377f, 0.166831f, 
	-0.000739f, -0.009554f, 0.016651f, -0.179430f, 0.010952f, -0.056267f, 0.038726f, 0.039934f, 
	-0.023455f, 0.008669f, -0.059696f, 0.025705f, -0.161170f, 0.025452f, 0.010710f, 0.010822f, 
	-0.133585f, -0.161567f, 0.043435f, -0.102035f, 0.015470f, 0.042559f, 0.002392f, -0.027561f, 
	0.016354f, -0.003756f, -0.006025f, -0.043384f, 0.126625f, -0.019970f, -0.025612f, 0.084116f, 
	0.005688f, -0.160384f, -0.046754f, -0.118538f, 0.083255f, -0.066779f, 0.010737f, -0.020599f, 
	0.035052f, -0.140543f, -0.100841f, 0.021867f, -0.118663f, -0.197757f, 0.151000f, 0.052664f, 
	0.033120f, -0.315291f, -0.074221f, -0.027841f, 0.074449f, -0.052992f, -0.018279f, -0.017524f, 
	0.388856f, -0.199267f, -0.046077f, 0.007627f, 0.008886f, 0.283246f, 0.152335f, -0.063633f, 
	-0.026070f, -0.110265f, -0.078361f, 0.060401f, 0.058403f, -0.023129f, 0.056407f, 0.035475f, 
	-0.075424f, 0.086689f, 0.124086f, 0.083806f, -0.256632f, -0.130464f, 0.015308f, 0.072611f, 
	0.081098f, -0.004283f, 0.005563f, 0.089972f, 0.041719f, -0.056934f, 0.051242f, -0.034485f, 
	-0.010845f, 0.015825f, -0.189162f, -0.108724f, -0.118950f, -0.125855f, 0.048435f, -0.187626f, 
};

const static dl_matrix3d_t pnet_l4_offset_cnn_weight={
	.w=1,
	.h=1,
	.c=32,
	.n=4,
	.stride=32,
	.item=(fptp_t *)(&pnet_l4_offset_cnn_weight_item_array[0])
};
static const dl_matrix3d_t *get_coeff_3d(const char *name, void *arg, int hint) {
	if (strcmp(name, "pnet_l4_offset_cnn_weight")==0) return &pnet_l4_offset_cnn_weight;
	if (strcmp(name, "pnet_l4_offset_cnn_bias")==0) return &pnet_l4_offset_cnn_bias;
	if (strcmp(name, "pnet_l4_landmark_cnn_weight")==0) return &pnet_l4_landmark_cnn_weight;
	if (strcmp(name, "pnet_l4_landmark_cnn_bias")==0) return &pnet_l4_landmark_cnn_bias;
	if (strcmp(name, "pnet_l4_category_cnn_weight")==0) return &pnet_l4_category_cnn_weight;
	if (strcmp(name, "pnet_l4_category_cnn_bias")==0) return &pnet_l4_category_cnn_bias;
	if (strcmp(name, "pnet_l3_mn_depth_active_prelu_alpha")==0) return &pnet_l3_mn_depth_active_prelu_alpha;
	if (strcmp(name, "pnet_l3_mn_depth")==0) return &pnet_l3_mn_depth;
	if (strcmp(name, "pnet_l3_mn_compress")==0) return &pnet_l3_mn_compress;
	if (strcmp(name, "pnet_l3_mn_bias")==0) return &pnet_l3_mn_bias;
	if (strcmp(name, "pnet_l2_mn_depth_active_prelu_alpha")==0) return &pnet_l2_mn_depth_active_prelu_alpha;
	if (strcmp(name, "pnet_l2_mn_depth")==0) return &pnet_l2_mn_depth;
	if (strcmp(name, "pnet_l2_mn_compress")==0) return &pnet_l2_mn_compress;
	if (strcmp(name, "pnet_l2_mn_bias")==0) return &pnet_l2_mn_bias;
	if (strcmp(name, "pnet_l1_mn_depth_active_prelu_alpha")==0) return &pnet_l1_mn_depth_active_prelu_alpha;
	if (strcmp(name, "pnet_l1_mn_depth")==0) return &pnet_l1_mn_depth;
	if (strcmp(name, "pnet_l1_mn_compress")==0) return &pnet_l1_mn_compress;
	if (strcmp(name, "pnet_l1_mn_bias")==0) return &pnet_l1_mn_bias;
	return NULL;
}
static const model_info_t *get_info(void *arg) {
	return &model_info;
}
const model_coeff_getter_t get_coeff_pnet_model={
	.getter_info=get_info,
	.getter_3d=get_coeff_3d,
};

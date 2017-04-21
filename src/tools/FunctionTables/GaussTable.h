#ifndef GAUSS_TABLE_H
#define GAUSS_TABLE_H

#define INF 999999.9f

float Gauss_Table[][10] = 
{ {0.0f},
  {0.0001f, 0.0001f, 0.0001f, 0.0001f, 0.0001f, 0.0001f, 0.0001f, 0.0001f, 0.0001f, 0.0001f},
  {0.0001f, 0.0001f, 0.0001f, 0.0001f, 0.0001f, 0.0001f, 0.0001f, 0.0001f, 0.0001f, 0.0001f},
  {0.0002f, 0.0002f, 0.0001f, 0.0001f, 0.0001f, 0.0001f, 0.0001f, 0.0001f, 0.0001f, 0.0001f},
  {0.0002f, 0.0002f, 0.0002f, 0.0002f, 0.0002f, 0.0002f, 0.0002f, 0.0002f, 0.0002f, 0.0002f},
  {0.0003f, 0.0003f, 0.0003f, 0.0003f, 0.0003f, 0.0003f, 0.0003f, 0.0003f, 0.0003f, 0.0002f},
  {0.0005f, 0.0005f, 0.0005f, 0.0004f, 0.0004f, 0.0004f, 0.0004f, 0.0004f, 0.0004f, 0.0003f},
  {0.0007f, 0.0007f, 0.0006f, 0.0006f, 0.0006f, 0.0006f, 0.0006f, 0.0005f, 0.0005f, 0.0005f},
  {0.0007f, 0.0007f, 0.0006f, 0.0006f, 0.0006f, 0.0006f, 0.0006f, 0.0005f, 0.0005f, 0.0005f},
  {0.0010f, 0.0009f, 0.0009f, 0.0009f, 0.0008f, 0.0008f, 0.0008f, 0.0008f, 0.0007f, 0.0007f},
  {0.0013f, 0.0013f, 0.0013f, 0.0012f, 0.0012f, 0.0011f, 0.0011f, 0.0011f, 0.0010f, 0.0010f},
  {0.0019f, 0.0018f, 0.0018f, 0.0017f, 0.0016f, 0.0016f, 0.0015f, 0.0015f, 0.0014f, 0.0014f},
  {0.0026f, 0.0025f, 0.0024f, 0.0023f, 0.0023f, 0.0022f, 0.0021f, 0.0021f, 0.0020f, 0.0019f},
  {0.0035f, 0.0034f, 0.0033f, 0.0032f, 0.0031f, 0.0030f, 0.0029f, 0.0028f, 0.0027f, 0.0026f},
  {0.0047f, 0.0045f, 0.0044f, 0.0043f, 0.0041f, 0.0040f, 0.0039f, 0.0038f, 0.0037f, 0.0036f},
  {0.0062f, 0.0060f, 0.0059f, 0.0057f, 0.0055f, 0.0054f, 0.0052f, 0.0051f, 0.0049f, 0.0048f},
  {0.0082f, 0.0080f, 0.0078f, 0.0075f, 0.0073f, 0.0071f, 0.0069f, 0.0068f, 0.0066f, 0.0064f},
  {0.0107f, 0.0104f, 0.0102f, 0.0099f, 0.0096f, 0.0094f, 0.0091f, 0.0089f, 0.0087f, 0.0084f},
  {0.0139f, 0.0136f, 0.0132f, 0.0129f, 0.0125f, 0.0122f, 0.0119f, 0.0116f, 0.0113f, 0.0110f},
  {0.0179f, 0.0174f, 0.0170f, 0.0166f, 0.0162f, 0.0158f, 0.0154f, 0.0150f, 0.0146f, 0.0143f},
  {0.0228f, 0.0222f, 0.0217f, 0.0212f, 0.0207f, 0.0202f, 0.0197f, 0.0192f, 0.0188f, 0.0183f},
  {0.0287f, 0.0281f, 0.0274f, 0.0268f, 0.0262f, 0.0256f, 0.0250f, 0.0244f, 0.0239f, 0.0233f},
  {0.0359f, 0.0351f, 0.0344f, 0.0336f, 0.0329f, 0.0322f, 0.0314f, 0.0307f, 0.0301f, 0.0294f},
  {0.0446f, 0.0436f, 0.0427f, 0.0418f, 0.0409f, 0.0401f, 0.0392f, 0.0384f, 0.0375f, 0.0367f},
  {0.0548f, 0.0537f, 0.0526f, 0.0516f, 0.0505f, 0.0495f, 0.0485f, 0.0475f, 0.0465f, 0.0455f},
  {0.0668f, 0.0655f, 0.0643f, 0.0630f, 0.0618f, 0.0606f, 0.0594f, 0.0582f, 0.0571f, 0.0559f},
  {0.0808f, 0.0793f, 0.0778f, 0.0764f, 0.0749f, 0.0735f, 0.0721f, 0.0708f, 0.0694f, 0.0681f},
  {0.0968f, 0.0951f, 0.0934f, 0.0918f, 0.0901f, 0.0885f, 0.0869f, 0.0853f, 0.0838f, 0.0823f},
  {0.1151f, 0.1131f, 0.1112f, 0.1093f, 0.1075f, 0.1056f, 0.1038f, 0.1020f, 0.1003f, 0.0985f},
  {0.1357f, 0.1335f, 0.1314f, 0.1292f, 0.1271f, 0.1251f, 0.1230f, 0.1210f, 0.1190f, 0.1170f},
  {0.1587f, 0.1562f, 0.1539f, 0.1515f, 0.1492f, 0.1469f, 0.1446f, 0.1423f, 0.1401f, 0.1379f},
  {0.1841f, 0.1814f, 0.1788f, 0.1762f, 0.1736f, 0.1711f, 0.1685f, 0.1660f, 0.1635f, 0.1611f},
  {0.2119f, 0.2090f, 0.2061f, 0.2033f, 0.2005f, 0.1977f, 0.1949f, 0.1922f, 0.1894f, 0.1867f},
  {0.2420f, 0.2389f, 0.2358f, 0.2327f, 0.2296f, 0.2266f, 0.2236f, 0.2206f, 0.2177f, 0.2148f},
  {0.2743f, 0.2709f, 0.2676f, 0.2643f, 0.2611f, 0.2578f, 0.2546f, 0.2514f, 0.2483f, 0.2451f},
  {0.3085f, 0.3050f, 0.3015f, 0.2981f, 0.2946f, 0.2912f, 0.2877f, 0.2843f, 0.2810f, 0.2776f},
  {0.3446f, 0.3409f, 0.3372f, 0.3336f, 0.3300f, 0.3264f, 0.3228f, 0.3192f, 0.3156f, 0.3121f},
  {0.3821f, 0.3783f, 0.3745f, 0.3707f, 0.3669f, 0.3632f, 0.3594f, 0.3557f, 0.3520f, 0.3483f},
  {0.4207f, 0.4168f, 0.4129f, 0.4090f, 0.4052f, 0.4013f, 0.3974f, 0.3936f, 0.3897f, 0.3859f},
  {0.4602f, 0.4562f, 0.4522f, 0.4483f, 0.4443f, 0.4404f, 0.4364f, 0.4325f, 0.4286f, 0.4247f},
  {0.5000f, 0.4960f, 0.4920f, 0.4880f, 0.4840f, 0.4801f, 0.4761f, 0.4721f, 0.4681f, 0.4641f},
  {0.5000f, 0.5040f, 0.5080f, 0.5120f, 0.5160f, 0.5199f, 0.5239f, 0.5279f, 0.5319f, 0.5359f},
  {0.5398f, 0.5438f, 0.5478f, 0.5517f, 0.5557f, 0.5596f, 0.5636f, 0.5675f, 0.5714f, 0.5753f},
  {0.5793f, 0.5832f, 0.5871f, 0.5910f, 0.5948f, 0.5987f, 0.6026f, 0.6064f, 0.6103f, 0.6141f},
  {0.6179f, 0.6217f, 0.6255f, 0.6293f, 0.6331f, 0.6368f, 0.6406f, 0.6443f, 0.6480f, 0.6517f},
  {0.6554f, 0.6591f, 0.6628f, 0.6664f, 0.6700f, 0.6736f, 0.6772f, 0.6808f, 0.6844f, 0.6879f},
  {0.6915f, 0.6950f, 0.6985f, 0.7019f, 0.7054f, 0.7088f, 0.7123f, 0.7157f, 0.7190f, 0.7224f},
  {0.7257f, 0.7291f, 0.7324f, 0.7357f, 0.7389f, 0.7422f, 0.7454f, 0.7486f, 0.7517f, 0.7549f},
  {0.7580f, 0.7611f, 0.7642f, 0.7673f, 0.7704f, 0.7734f, 0.7764f, 0.7794f, 0.7823f, 0.7852f},
  {0.7881f, 0.7910f, 0.7939f, 0.7967f, 0.7995f, 0.8023f, 0.8051f, 0.8078f, 0.8106f, 0.8133f},
  {0.8159f, 0.8186f, 0.8212f, 0.8238f, 0.8264f, 0.8289f, 0.8315f, 0.8340f, 0.8365f, 0.8389f},
  {0.8413f, 0.8438f, 0.8461f, 0.8485f, 0.8508f, 0.8531f, 0.8554f, 0.8577f, 0.8599f, 0.8621f},
  {0.8643f, 0.8665f, 0.8686f, 0.8708f, 0.8729f, 0.8749f, 0.8770f, 0.8790f, 0.8810f, 0.8830f},
  {0.8849f, 0.8869f, 0.8888f, 0.8907f, 0.8925f, 0.8944f, 0.8962f, 0.8980f, 0.8997f, 0.9015f},
  {0.9032f, 0.9049f, 0.9066f, 0.9082f, 0.9099f, 0.9115f, 0.9131f, 0.9147f, 0.9162f, 0.9177f},
  {0.9192f, 0.9207f, 0.9222f, 0.9236f, 0.9251f, 0.9265f, 0.9279f, 0.9292f, 0.9306f, 0.9319f},
  {0.9332f, 0.9345f, 0.9357f, 0.9370f, 0.9382f, 0.9394f, 0.9406f, 0.9418f, 0.9429f, 0.9441f},
  {0.9452f, 0.9463f, 0.9474f, 0.9484f, 0.9495f, 0.9505f, 0.9515f, 0.9525f, 0.9535f, 0.9545f},
  {0.9554f, 0.9564f, 0.9573f, 0.9582f, 0.9591f, 0.9599f, 0.9608f, 0.9616f, 0.9625f, 0.9633f},
  {0.9641f, 0.9649f, 0.9656f, 0.9664f, 0.9671f, 0.9678f, 0.9686f, 0.9693f, 0.9699f, 0.9706f},
  {0.9713f, 0.9719f, 0.9726f, 0.9732f, 0.9738f, 0.9744f, 0.9750f, 0.9756f, 0.9761f, 0.9767f},
  {0.9772f, 0.9778f, 0.9783f, 0.9788f, 0.9793f, 0.9798f, 0.9803f, 0.9808f, 0.9812f, 0.9817f},
  {0.9821f, 0.9826f, 0.9830f, 0.9834f, 0.9838f, 0.9842f, 0.9846f, 0.9850f, 0.9854f, 0.9857f},
  {0.9861f, 0.9864f, 0.9868f, 0.9871f, 0.9875f, 0.9878f, 0.9881f, 0.9884f, 0.9887f, 0.9890f},
  {0.9893f, 0.9896f, 0.9898f, 0.9901f, 0.9904f, 0.9906f, 0.9909f, 0.9911f, 0.9913f, 0.9916f},
  {0.9918f, 0.9920f, 0.9922f, 0.9925f, 0.9927f, 0.9929f, 0.9931f, 0.9932f, 0.9934f, 0.9936f},
  {0.9938f, 0.9940f, 0.9941f, 0.9943f, 0.9945f, 0.9946f, 0.9948f, 0.9949f, 0.9951f, 0.9952f},
  {0.9953f, 0.9955f, 0.9956f, 0.9957f, 0.9959f, 0.9960f, 0.9961f, 0.9962f, 0.9963f, 0.9964f},
  {0.9965f, 0.9966f, 0.9967f, 0.9968f, 0.9969f, 0.9970f, 0.9971f, 0.9972f, 0.9973f, 0.9974f},
  {0.9974f, 0.9975f, 0.9976f, 0.9977f, 0.9977f, 0.9978f, 0.9979f, 0.9979f, 0.9980f, 0.9981f},
  {0.9981f, 0.9982f, 0.9982f, 0.9983f, 0.9984f, 0.9984f, 0.9985f, 0.9985f, 0.9986f, 0.9986f},
  {0.9987f, 0.9987f, 0.9987f, 0.9988f, 0.9988f, 0.9989f, 0.9989f, 0.9989f, 0.9990f, 0.9990f},
  {0.9990f, 0.9991f, 0.9991f, 0.9991f, 0.9992f, 0.9992f, 0.9992f, 0.9992f, 0.9993f, 0.9993f},
  {0.9993f, 0.9993f, 0.9994f, 0.9994f, 0.9994f, 0.9994f, 0.9994f, 0.9995f, 0.9995f, 0.9995f},
  {0.9995f, 0.9995f, 0.9995f, 0.9996f, 0.9996f, 0.9996f, 0.9996f, 0.9996f, 0.9996f, 0.9997f},
  {0.9997f, 0.9997f, 0.9997f, 0.9997f, 0.9997f, 0.9997f, 0.9997f, 0.9997f, 0.9997f, 0.9998f},
  {0.9998f, 0.9998f, 0.9998f, 0.9998f, 0.9998f, 0.9998f, 0.9998f, 0.9998f, 0.9998f, 0.9998f},
  {0.9998f, 0.9998f, 0.9999f, 0.9999f, 0.9999f, 0.9999f, 0.9999f, 0.9999f, 0.9999f, 0.9999f},
  {0.9999f, 0.9999f, 0.9999f, 0.9999f, 0.9999f, 0.9999f, 0.9999f, 0.9999f, 0.9999f, 0.9999f},
  {0.9999f, 0.9999f, 0.9999f, 0.9999f, 0.9999f, 0.9999f, 0.9999f, 0.9999f, 0.9999f, 0.9999f},
  {1.0000f, 1.0000f, 1.0000f, 1.0000f, 1.0000f, 1.0000f, 1.0000f, 1.0000f, 1.0000f, 1.0000f}
};


#endif
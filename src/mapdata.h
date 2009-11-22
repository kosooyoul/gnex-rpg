const int SubLayer[60][40] = {


 10, 90, 10, 10, 90, 80, 90, 80,222,214,226, 80, 80, 80,197,222,223,224,225,226, 10, 80, 90, 85, 85, 85, 85, 85, 85,104, 95, 95, 95, 95, 95, 95, 95, 95, 95,106,
 90, 80, 80, 90, 80, 80, 90, 10,197,198,199, 80, 90, 10,207,197,198,198,198,199, 90, 90, 80,104, 95, 95, 95, 95,106, 86, 77, 78, 78, 78, 78, 78, 78, 78, 79, 84,
 10, 10, 90, 80, 80, 80, 90, 80,207,208,209, 90, 80, 90,217,207,208,208,208,209, 80, 10, 90, 86, 77, 78, 78, 79, 94, 96, 87, 88, 88, 88, 88, 88, 88, 88, 89, 84,
212,230,216, 80, 90, 90, 80, 90,197,198,199, 10, 90, 90, 80,217,218,180,218,219, 90, 80, 10, 86, 87, 88, 88, 89, 77, 79, 97, 98, 98, 98, 98, 98, 98, 98, 99, 84,
213,214,215,216, 80, 10, 10, 80,217,218,218,212,230,216, 10, 10, 90, 90, 90, 90, 10, 90, 80, 86, 97, 98, 98, 99, 87, 89, 20, 20, 20, 20, 20, 20, 20, 20, 20, 84,
223,224,225,226,216, 90, 10, 90, 80, 90,212,213,214,215,216, 80, 90, 90, 80, 10, 90, 90, 10, 86, 20, 20, 20, 20, 97, 99, 20, 20, 20, 20, 20, 20, 20, 20, 20, 84,
198,198,198,199,216, 80, 90, 10, 10, 80,222,223,224,225,226, 10, 80, 10, 80, 41, 42, 43, 90, 86, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 84,
208,208,212,230,216, 10, 80, 90, 80, 90,197,198,198,198,199, 90, 10, 80, 90, 51, 52, 53, 90, 86, 20, 20, 20, 20, 74, 76, 20, 20, 20, 20, 20, 20, 20, 20, 20, 84,
198,212,213,214,215,216, 80, 90, 80, 80,207,208,208,208,209, 90, 80, 90, 90, 61, 62, 63, 80, 86, 20, 20, 20, 20, 84, 86, 20, 20, 20, 20, 20, 20, 20, 20, 20, 84,
208,222,223,224,225,226, 90, 90, 10, 80,217,218,180,218,219, 80, 10, 80, 10, 80, 90, 90, 90, 86, 20, 20, 20, 20, 84, 86, 20, 20, 20, 20, 20, 20, 20, 20, 20, 84,
218,197,198,198,198,199, 90, 90, 80, 10, 80, 10, 80, 90, 90, 90, 90, 80, 90, 80,212,230,216, 86, 20, 20, 20, 20, 84, 86, 20, 20, 20, 20, 20, 74, 75, 75, 75,126,
 90,207,208,208,208,209, 80, 10, 90, 90, 80, 10, 80, 80, 90, 10, 90, 90, 80,212,213,214,215,124, 75, 75, 75, 75,126, 86, 20, 20, 20, 20, 20, 84, 85, 85, 85, 85,
 90,217,218,180,218,219, 10, 10, 10, 90, 10, 90, 80, 90, 90, 80, 80, 10, 80,222,223,224,225, 85, 85, 85, 85, 85, 85, 86, 20, 20, 20, 20, 20, 84, 85, 85, 85, 85,
 90, 90, 90, 90, 10, 80, 80, 90, 80, 10, 10, 90, 10, 10, 80, 10, 80, 80, 10,197,198,198,198, 85, 85, 85, 85, 85, 85,124, 75, 76, 20, 74, 75,126, 85, 85, 85, 85,
 80, 90, 90, 80, 80, 10, 90, 80, 90, 80, 90, 10, 90, 90, 10, 90, 90, 10, 10,207,208,208,208, 85, 85, 85, 85, 85, 85, 85, 85,124, 75,126, 85, 85, 85, 85, 85, 85,
 80, 80, 10, 90, 10, 80, 90, 10, 10, 90, 90, 90, 10, 90, 80, 90, 80, 10, 80,212,230,216, 10,104, 95, 95, 95, 95, 95,106,104, 95, 95, 95, 95, 95, 95, 95, 95,106,
 90, 90, 80, 90, 90, 90, 80, 90, 90, 10, 80, 90, 10, 80, 10, 41, 42, 43,212,213,214,215,216, 86, 77, 78, 78, 78, 79, 94, 96, 77, 78, 78, 78, 78, 78, 78, 79, 84,
 10, 80, 90, 90, 10, 10, 10, 80, 80, 90, 80, 10, 80, 10, 80, 51, 52, 53,222,223,224,225,226, 86, 87, 88, 88, 88, 89, 77, 79, 87, 88, 88, 88, 88, 88, 88, 89, 84,
 80, 10,212,230,216, 80, 90, 10, 90, 90, 10, 90, 80, 90, 90, 61, 62, 63,197,198,198,198,199, 86, 97, 98, 98, 98, 99, 87, 89, 97, 98, 98, 98, 98, 98, 98, 99, 84,
 90,212,213,214,215,216, 10, 90, 80, 80, 10,212,230,216, 10, 80, 90, 90,207,208,208,208,209, 86, 20, 20, 20, 20, 20, 97, 99, 20, 20, 20, 20, 20, 20, 20, 20, 84,
 10,222,223,224,225,226, 80, 10, 90, 90,212,213,214,215,216, 10, 80, 90,217,218,218,218,219, 86, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 84,
 90,197,198,198,198,199, 90, 10, 90, 10,222,223,224,225,226, 90, 90, 10, 90, 80, 10, 10, 90, 86, 20, 20, 20, 20, 20, 74, 76, 20, 20, 20, 20, 20, 20, 20, 20, 84,
 10,207,208,208,208,209, 10, 90, 80, 90,197,198,198,198,199, 10, 90, 10, 90, 10, 80, 90, 80, 86, 20, 20, 20, 20, 20, 84, 86, 20, 20, 20, 20, 20, 20, 20, 20, 84,
 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85,124, 75, 76, 20, 74, 75,126, 86, 20, 20, 20, 20, 20, 20, 20, 20, 84,
 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85,124, 75,126, 85, 85, 86, 20, 20, 20, 20, 20, 20, 20, 20, 84,
 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 86, 20, 20, 20, 20, 20, 20, 20, 20, 84,
 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85,124, 75, 75, 75, 75, 75, 75, 75, 75,126,
 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85,104, 95, 95, 95, 95, 95,106, 85,104, 95, 95, 95, 95, 95,106, 85,
 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 86, 78, 78, 78, 78, 79, 84, 85, 86, 77, 78, 78, 78, 79, 84, 85,
 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85,104, 96, 88, 88, 88, 88, 89, 94, 95, 96, 87, 88, 88, 88, 89, 94,106,
 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 86, 79, 98, 98, 98, 98, 99, 77, 78, 79, 97, 98, 98, 98, 99, 77, 84,
 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 86, 89, 20, 20, 20, 20, 20, 87, 88, 89, 20, 20, 20, 20, 20, 87, 84,
 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 86, 99, 20, 20, 20, 20, 20, 97, 98, 99, 20, 20, 20, 20, 20, 97, 84,
 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 86, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 84,
 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 86, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 84,
 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 86, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 84,
 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 86, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 84,
 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 86, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 84,
 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85,124, 75, 75, 75, 75, 75, 75, 76, 20, 74, 75, 75, 75, 75, 75, 75,126,
 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85, 85,124, 75,126, 85, 85, 85, 85, 85, 85, 85,
142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,102,103,142,142,142,142,142,142,102,103,142,142,142,142,142,142,142,
142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,112,113,142,142,142,142,142,142,122,123,142,142,142,142,142,142,142,
142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,102,103,142,142,142,142,142, 44, 45,
142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,102,103,142,142,142,142,102,103,142,142,142,142,142,142,102,103,102,103,142,142, 44, 55, 80,
142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,102,103,142,142,142,142,122,123,142,142,142,142,142,142,112,113,122,123,142, 44, 55, 90, 10,
142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,102,103,122,123,142,142,122,123,102,103,142,142,142,142,142,142,142,142,102,103,142, 54, 80, 10, 90,
142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,112,113,112,133,142,142,112,133,102,103,142,142,142,142,142,142,142,142,122,123,142, 54, 10, 90, 90,
142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,112,113,142,142,142,142,142,142,142,142,112,133,142, 54, 80, 90, 80,
142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142, 54, 90, 10, 90,
142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142, 44, 46,142, 44, 45, 45, 45, 45, 45, 45, 45, 55, 90, 80, 80,
142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142, 64, 66,142, 64, 65, 65, 65, 65, 65, 65, 65, 55, 10, 90, 90,
142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142, 54, 90, 80, 90,
142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,102,103,142,142,142,142,122,123,142, 64, 55, 10, 80,
142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,102,103,122,123,142,142,142,142,102,103,102,103,122,123,142,142,142,142,102,103,142,142, 64, 55, 10,
142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,102,103,112,133,142,142,142,142,112,113,112,113,112,133,142,142,142,142,102,103,142,142,142, 64, 65,
142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,102,103,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,102,103,102,103,142,142,142,
142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,112,113,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,112,113,122,123,142,142,142,
142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,102,103,142,142,142,
142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,102,103,142,142,142,142,142,142,142,142,102,103,142,142,142,142,142,142,142,142,122,123,142,142,142,
142,142,142,142,142,142,142,142,142,142,142,142,142,142,142,102,103,142,142,142,142,142,142,142,142,122,123,142,142,142,142,142,142,142,142,102,103,142,142,142




};

const int SupLayer[60][40] = {


 47, 47, 47, 47, 47, 48,  0, 56, 40, 40, 40, 47, 47, 47, 40, 40, 40, 73, 40, 40, 47, 47, 48, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
116,224,  0,116,116, 58,  0, 56, 40, 57, 40,116,  0,113, 40, 40, 40, 40, 40, 40,210,105, 58, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
225,227,229,  0,116, 49,  0, 59, 40, 40, 40,116,224,  0, 40, 40, 40, 42, 40, 40,  0,  0, 58, 40, 40, 44, 45, 40, 40, 40, 40, 40, 73, 40, 40,222,223,223, 40, 40,
 40, 40, 40,229,  0,180,  0,123, 40, 40, 40,225,227,229,  0, 40, 40, 40, 40, 40,  0,  0, 58, 40, 40, 54, 55, 40, 40, 40, 40, 40, 40, 40, 40,232,233,233, 40, 40,
 40, 40, 40, 40,229,190,  0,  0, 40, 40,225, 40, 40, 40,229,180,  0,  0,  0,172,173,174, 58, 40,171, 40, 40, 40, 40, 40,106,  0,  0,  0,  0, 95, 96, 96,  0, 40,
 40, 40, 40,224, 40, 50,  0,  0,  0,  0, 40, 40, 40, 40, 40,190,  0,  0,  0,182,183,184, 58, 40, 94,105,  0,  0, 40, 40,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40,
 40, 40,225,227, 40,114,  0,  0,  0,  0, 40, 40, 73, 40, 40, 50,  0,  0,  0,192,193,194, 58, 40,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40,
 40,225, 40, 40, 40,229,  0,  0,  0,  0, 40, 40, 40, 40, 40,  0,  0,  0,  0, 10, 81, 11, 49, 40, 67, 68, 69,  0, 40, 40,  0,  0,  0,  0,  0,104,103,104,  0, 40,
 40, 40, 40, 40, 40, 40,  0,  0,  0,116, 40, 40, 42, 40, 40,  0,  0,  0,  0,  0,  0,224,116, 40, 77, 78, 79,  0, 40, 40,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40,
 40, 40, 40, 73, 40, 40,  0,  0,  0,116, 40, 40, 40, 40, 40,113,  0,  0,  0,  0,225,227,229, 40, 67, 68, 69,  0, 40, 40,162,  0,  0,  0,162,  0,  0,116,116, 40,
 40, 40, 40, 40, 40, 40,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,225, 40, 40, 40, 40, 77, 78, 79,  0, 40, 40,111,  0,  0,  0,111, 40, 40, 40, 40, 40,
 48, 40, 40, 42, 40, 40,180,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40,  0,  0,  0,  0,  0, 40, 40, 40, 40, 40,
 58, 40, 40, 40, 40, 40,190,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,129, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40,  0,  0,  0,  0,  0, 40, 40, 40, 40, 40,
 58,  0,  0,  0,  0,113, 50,  0,  0,  0,  0,170,  0,  0,  0,  0,  0,113,128, 40,224, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40,  0, 40, 40, 40, 40, 40, 40, 40,
 59,123,  0,  0,  0,  0,  0,  0,  0,  0, 90, 91, 92,  0,  0,172,173,174,114,225,227,229, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,100,101,102,  0,  0,182,183,184,225, 40, 40, 40,229, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
 48,  0,  0,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192,193,194, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 44, 45, 40, 40, 40, 40,
 58,116,225,227,229,  0,  0,  0,  0,  0,  0,  0,224,  0,  0, 10, 81, 11, 40, 40, 73, 40, 40, 40, 40, 40, 73, 40, 40, 40, 40,202,203, 40, 54, 55, 40, 40, 40, 40,
 58,225, 40, 40, 40,229,  0,  0,  0,180,  0,225,227,229,  0,  0,  0,  0, 40, 40, 40, 40, 40, 40,162, 40, 40, 40,162, 40, 40,212,213, 40, 40, 40, 40, 40, 40, 40,
 58, 40, 40, 40, 40, 40,114,  0,  0,190,225, 40, 40, 40,229,  0,  0,  0, 40, 40, 40, 40,180, 40,111,  0,  0,  0,111, 40, 40, 95, 96,106,  0,  0, 87, 88, 89, 40,
 58, 40, 40,  0, 40, 40,128,  0,  0, 50, 40, 40, 40, 40, 40,  0,  0,  0, 40, 40, 40, 40,190, 40,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 97, 98, 99, 40,
 58, 40, 40, 40, 40, 40,116,116,  0,  0, 40, 40,  0, 40, 40,116,  0,  0,  0,  0,  0,  0, 50, 40,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0,  0,107,108,109, 40,
 58,  0,  0,  0,  0,  0, 47, 47, 47, 47,  0,  0,  0,  0,  0, 47, 47, 47, 47, 47, 48,116,116, 40,  0,  0,  0,  0,  0, 40, 40,  0,104,126,104,  0, 87, 88, 89, 40,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40, 40,  0, 40, 40, 40, 40,  0,  0,  0,  0,  0, 97, 98, 99, 40,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40, 40, 40, 40, 40, 40, 40,  0,  0,  0,  0,  0,107,108,109, 40,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40, 40, 40, 40, 40, 40, 40,105,  0,  0,  0,  0,  0,  0,  0, 40,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40,  0, 40,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40, 40, 83, 84, 40, 40, 40, 40, 40, 40, 63, 40, 70, 40,  0, 40,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0,  0, 40, 72, 40,  0,  0,  0,  0,114, 40, 40,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40,162,126,126,126,126,126, 40, 40, 40,126,126,126,126,126,162, 40,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40,111,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,111, 40,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40,  0,  0,104,103,104,  0,  0,  0,  0,  0,104,103,104,  0,  0, 40,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40,162,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,162, 40,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40,111,  0,  0,  0,  0,112,  0,  0,  0,112,  0,  0,  0,  0,111, 40,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40, 40, 40, 40, 40, 40, 40,  0, 40, 40, 40, 40, 40, 40, 40, 40,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40, 40,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0,  0,  0, 40, 40, 40, 40,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0,  0,  0, 40, 40, 40, 40,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40, 40, 40,  0,  0, 40, 40, 40, 40,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0, 46,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40, 40, 40,  0,  0, 40, 40, 40, 40,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0, 58,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0, 49,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,144,149,  0,  0,  0,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,145,146,147,148,  0,  0,  0,  0,  0,  0, 46,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,154,155,156,157,158,159,  0,  0,  0,  0,  0, 58,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,164,165,  0,  0,167,169,  0,  0,  0,  0,  0, 49,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40,166,  0,  0,167, 40, 40,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40, 40, 40,  0,  0,  0,  0, 40, 40, 40, 40, 40, 40,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40, 40, 40,  0,  0,  0,  0, 40, 40, 40, 40, 40, 40,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40, 40, 40,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40, 40, 40,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0,  0,  0,  0,  0,  0, 40, 40,  0,  0,  0

};




int EventLayer[60][40] = {

0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0


};
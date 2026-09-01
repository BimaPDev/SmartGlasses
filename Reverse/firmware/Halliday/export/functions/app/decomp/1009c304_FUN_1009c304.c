/* FUN_1009c304 @ 0x1009c304 */

void FUN_1009c304(short param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *param_2;
  uVar3 = FUN_1013d980((int)(short)(param_1 + 0x5a));
  fVar5 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  uVar3 = FUN_1013d980((int)param_1);
  fVar2 = DAT_1009c384;
  fVar1 = DAT_1009c380;
  fVar4 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  *param_2 = (fVar5 * fVar6 - fVar4 * DAT_1009c380) / DAT_1009c384;
  uVar3 = FUN_1013d980((int)param_1);
  fVar5 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  uVar3 = FUN_1013d980((int)(short)(param_1 + 0x5a));
  fVar4 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  *param_3 = (fVar5 * fVar6 + fVar4 * fVar1) / fVar2;
  return;
}


/* FUN_2c4afe84 @ 0x2c4afe84 */

float FUN_2c4afe84(float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 in_d0;
  float fVar5;
  double dVar4;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  double dVar6;
  float fVar7;
  
  fVar2 = (float)in_d0;
  fVar5 = (float)((ulonglong)in_d0 >> 0x20);
  dVar4 = (double)(fVar5 * fVar5 + fVar2 * fVar2);
  if ((int)((uint)(dVar4 < 0.0) << 0x1f) < 0) {
    uVar3 = FUN_2c667350();
    dVar4 = (double)CONCAT44(extraout_s1_00,uVar3);
  }
  else {
    dVar4 = SQRT(dVar4);
  }
  dVar6 = (double)(param_2 * param_2 + param_1 * param_1);
  if ((int)((uint)(dVar6 < 0.0) << 0x1f) < 0) {
    uVar3 = FUN_2c667350(SUB84(dVar6,0));
    dVar6 = (double)CONCAT44(extraout_s1_01,uVar3);
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  fVar7 = -(fVar5 * param_1) + fVar2 * param_2;
  fVar2 = (fVar5 * param_2 + fVar2 * param_1) / ((float)dVar6 * (float)dVar4);
  iVar1 = (uint)(fVar7 < 0.0) << 0x1f;
  if (-1 < iVar1) {
    fVar7 = 1.0;
  }
  if (iVar1 < 0) {
    fVar7 = -1.0;
  }
  if ((int)((uint)(fVar2 < -1.0) << 0x1f) < 0) {
    uVar3 = 0;
  }
  else if (fVar2 <= 1.0) {
    uVar3 = SUB84((double)fVar2,0);
  }
  else {
    uVar3 = 0;
  }
  uVar3 = FUN_2c6672a4(uVar3);
  return (float)(double)CONCAT44(extraout_s1,uVar3) * fVar7;
}


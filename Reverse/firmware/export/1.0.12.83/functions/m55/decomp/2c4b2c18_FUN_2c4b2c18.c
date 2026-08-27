/* FUN_2c4b2c18 @ 0x2c4b2c18 */

undefined4
FUN_2c4b2c18(float param_1,float param_2,undefined4 param_3,int param_4,undefined2 param_5,
            undefined2 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  byte bVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 in_fpscr;
  float fVar4;
  
  bVar1 = (byte)((uint)in_fpscr >> 0x18);
  if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6 & 1)) {
    return 1;
  }
  puVar3 = *(undefined2 **)(param_4 + 0x34);
  if ((int)((uint)(param_2 < 1.0) << 0x1f) < 0) {
    param_2 = 1.0;
  }
  if (puVar3 == (undefined2 *)0x0) {
    iVar2 = FUN_2c4b4980(0x90);
    *(int *)(param_4 + 0x34) = iVar2;
    if (iVar2 == 0) {
      return 5;
    }
    FUN_2c674268(iVar2,0,0x90);
    puVar3 = *(undefined2 **)(param_4 + 0x34);
  }
  *puVar3 = param_5;
  *(undefined2 *)(*(int *)(param_4 + 0x34) + 2) = param_6;
  *(float *)(*(int *)(param_4 + 0x34) + 4) = param_1;
  *(float *)(*(int *)(param_4 + 0x34) + 8) = param_2;
  *(float *)(*(int *)(param_4 + 0x34) + 0x20) = param_1 * 0.5;
  fVar4 = *(float *)(*(int *)(param_4 + 0x34) + 8);
  *(float *)(*(int *)(param_4 + 0x34) + 0x28) = fVar4 * fVar4;
  *(undefined4 *)(*(int *)(param_4 + 0x34) + 0xc) = param_7;
  *(undefined4 *)(*(int *)(param_4 + 0x34) + 0x10) = param_8;
  *(undefined4 *)(*(int *)(param_4 + 0x34) + 0x14) = param_3;
  *(undefined4 *)(param_4 + 0x40) = param_9;
  return 0;
}


/* FUN_1011ad32 @ 0x1011ad32 */

void FUN_1011ad32(short *param_1,int param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_1[5];
  uVar4 = param_2 + (uint)*(byte *)(param_1 + 6);
  uVar5 = param_3 + (uint)*(byte *)(param_1 + 6);
  sVar2 = (short)(uVar4 / uVar1);
  *param_1 = ((short)uVar4 - uVar1 * sVar2) + 1;
  sVar3 = (short)(uVar5 / uVar1);
  param_1[2] = sVar2 + 1;
  param_1[3] = sVar3 + 1;
  param_1[1] = ((short)uVar5 - uVar1 * sVar3) + 1;
  return;
}


/* FUN_2c59d1c4 @ 0x2c59d1c4 */

void FUN_2c59d1c4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  int in_r12;
  int iVar5;
  
  do {
    bVar1 = *(byte *)(param_2 + in_r12) >> 4;
    bVar2 = *(byte *)(param_2 + in_r12) & 0xf;
    iVar5 = (int)(short)((short)in_r12 + 1);
    bVar4 = bVar1 + 0x30;
    if (bVar4 < 0x3a) {
      *(byte *)(param_3 + in_r12 * 2) = bVar4;
    }
    else {
      *(byte *)(param_3 + in_r12 * 2) = bVar1 + 0x57;
    }
    bVar1 = bVar2 + 0x30;
    iVar3 = param_3 + in_r12 * 2;
    if (bVar1 < 0x3a) {
      *(byte *)(iVar3 + 1) = bVar1;
    }
    else {
      *(byte *)(iVar3 + 1) = bVar2 + 0x57;
    }
    in_r12 = iVar5;
  } while (iVar5 < param_4);
  return;
}


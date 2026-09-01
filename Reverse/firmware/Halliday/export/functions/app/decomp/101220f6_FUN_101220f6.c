/* FUN_101220f6 @ 0x101220f6 */

undefined4 FUN_101220f6(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  piVar3 = *(int **)(param_1 + 0x10);
  iVar2 = *piVar3;
  if (param_2 == (byte *)0x0) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = 0;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[10] = *(byte *)(piVar3 + 6);
    iVar4 = *(int *)(iVar2 + 0xc);
    *param_2 = (byte)iVar4 & 0x3f;
    param_2[1] = (byte)((uint)(iVar4 << 0x12) >> 0x1a);
    param_2[2] = (byte)((uint)(iVar4 << 0xb) >> 0x1b);
    iVar4 = *(int *)(iVar2 + 0x10);
    param_2[5] = 0;
    param_2[3] = (byte)iVar4 & 0x1f;
    param_2[4] = (byte)((uint)(iVar4 << 0x14) >> 0x1c) - 1;
    *(ushort *)(param_2 + 6) = (ushort)((uint)(iVar4 << 9) >> 0x19) + 100;
    uVar5 = *(uint *)(iVar2 + 8) & 0x7f;
    *(short *)(param_2 + 8) = ((short)uVar5 + (short)(uVar5 << 2)) * 2;
  }
  return uVar1;
}


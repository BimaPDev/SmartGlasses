/* FUN_1406904c @ 0x1406904c */

void FUN_1406904c(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = (uint)*(byte *)(param_2 + 0x10);
  if (uVar1 != 0xff) {
    if (9 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_14069104,0x4ec,DAT_14069100);
    }
    iVar3 = *(int *)(*(int *)(DAT_140690fc + (param_1 + 0x22) * 4) + uVar1 * 4);
    if (iVar3 != 0) {
      uVar2 = *(byte *)(param_2 + 0x11) & 7;
      switch(uVar2) {
      case 0:
        *(undefined2 *)(iVar3 + 8) = 0;
        *(ushort *)(iVar3 + 0xe) = *(ushort *)(iVar3 + 0xe) & 0xefff;
        uVar1 = (uint)*(byte *)(param_2 + 0x10);
        uVar2 = *(byte *)(param_2 + 0x11) & 7;
        break;
      case 1:
        *(ushort *)(iVar3 + 0xe) = *(ushort *)(iVar3 + 0xe) & 0xdfff;
        uVar1 = (uint)*(byte *)(param_2 + 0x10);
        uVar2 = *(byte *)(param_2 + 0x11) & 7;
        break;
      case 2:
        *(undefined2 *)(iVar3 + 10) = 0;
        *(ushort *)(iVar3 + 0xe) = *(ushort *)(iVar3 + 0xe) & 0xfbff;
        uVar1 = (uint)*(byte *)(param_2 + 0x10);
        uVar2 = *(byte *)(param_2 + 0x11) & 7;
        break;
      case 3:
        *(ushort *)(iVar3 + 0xe) = *(ushort *)(iVar3 + 0xe) & 0xf7ff;
        uVar1 = (uint)*(byte *)(param_2 + 0x10);
        uVar2 = *(byte *)(param_2 + 0x11) & 7;
      }
      FUN_1406d104(param_1,uVar1,1 << uVar2 & 0xff);
      return;
    }
  }
  return;
}


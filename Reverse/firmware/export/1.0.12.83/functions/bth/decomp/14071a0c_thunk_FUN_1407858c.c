/* thunk_FUN_1407858c @ 0x14071a0c */

undefined4 thunk_FUN_1407858c(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar4 = *(ushort *)(param_1 + 1) & 0xfff;
  iVar2 = FUN_1407667c(3,uVar4);
  iVar1 = DAT_14078698;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_140786a4,DAT_1407869c,uVar4);
  }
  FUN_140e5148(*(undefined4 *)(DAT_14078698 + 4),0xffffffff);
  if (0x4f < *(uint *)(iVar1 + 0x280)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_140786a0,DAT_1407869c,uVar4,0x50);
  }
  iVar2 = FUN_1407522c(param_2 + param_4 & 0xffff);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_140786b0,DAT_1407869c,param_2,param_4);
  }
  *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) & 0xf0 | 3;
  FUN_14075468(iVar2,param_1,param_2 & 0xffff);
  FUN_14075468(iVar2,param_3,param_4);
  FUN_14074c04(iVar2,iVar1 + 0x278);
  FUN_140e5148(*(undefined4 *)(iVar1 + 4),0xffffffff);
  uVar3 = *(uint *)(iVar1 + 0x280);
  if ((uint)*(ushort *)(iVar1 + 0x284) < (uVar3 & 0xffff)) {
    *(short *)(iVar1 + 0x284) = (short)uVar3;
  }
  if ((uVar3 & 0xffff) < 0x51) {
    FUN_140e52d8(*(undefined4 *)(iVar1 + 4));
    FUN_140e52d8(*(undefined4 *)(iVar1 + 4));
    thunk_FUN_140a20f4();
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x43,DAT_140786ac,DAT_140786a8,uVar3 & 0xffff,*(undefined2 *)(iVar1 + 0x284));
}


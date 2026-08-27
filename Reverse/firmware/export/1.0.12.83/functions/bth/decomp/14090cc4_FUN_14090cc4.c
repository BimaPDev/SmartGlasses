/* FUN_14090cc4 @ 0x14090cc4 */

void FUN_14090cc4(undefined4 *param_1,byte *param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((*param_2 & 0xfb) != 2) && (*param_2 != 4)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14090dd8,DAT_14090dd4);
  }
  uVar1 = *(ushort *)(param_2 + 2);
  if ((uVar1 != 0) && ((*(int *)(param_2 + 4) != 0 && (uVar1 < 0x201)))) {
    if (*(int *)(param_2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_14090de4,DAT_14090dd4);
    }
    iVar2 = FUN_140759b8(uVar1 + 0x18);
    if (iVar2 != 0) {
      *(char *)(iVar2 + 8) = (char)param_3;
      *(byte *)(iVar2 + 9) = *param_2;
      *(undefined2 *)(iVar2 + 10) = *(undefined2 *)(param_2 + 2);
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_2 + 0xc);
      *(int *)(iVar2 + 0xc) = iVar2 + 0x18;
      FUN_140e5278(iVar2 + 0x18,*(undefined4 *)(param_2 + 4),*(undefined2 *)(param_2 + 2));
      FUN_14074a88(iVar2,param_1 + 0x20);
      *(short *)((int)param_1 + 0x7e) = *(short *)((int)param_1 + 0x7e) + 1;
      uVar3 = FUN_1408ad70(*param_1);
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x46,DAT_14090ddc,uVar3,DAT_14090dd4,iVar2,param_3,
                   *(undefined2 *)((int)param_1 + 0x7e),*(undefined4 *)(param_2 + 8));
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14090de8,DAT_14090dd4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x43,DAT_14090de0,DAT_14090dd4,uVar1,*(int *)(param_2 + 4));
}


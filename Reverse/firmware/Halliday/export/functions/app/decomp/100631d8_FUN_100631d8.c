/* FUN_100631d8 @ 0x100631d8 */

bool FUN_100631d8(int param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *DAT_10063228;
  if (iVar4 != 0) {
    if (param_1 == -1) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 0;
    }
    iVar2 = FUN_1011401c(iVar4 + 0x10,iVar4 + 0x10,param_1,uVar3);
    if (param_3 != (uint *)0x0) {
      *param_3 = *(uint *)(iVar4 + 0x28) & param_2;
    }
    puVar1 = DAT_10063238;
    *(undefined4 *)(iVar4 + 0x28) = 0;
    *puVar1 = *puVar1 | 0x1000000;
    return iVar2 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(DAT_10063234,0x188,DAT_10063230,DAT_1006322c);
}


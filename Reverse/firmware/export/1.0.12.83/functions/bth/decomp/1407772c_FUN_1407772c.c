/* FUN_1407772c @ 0x1407772c */

int FUN_1407772c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = FUN_1407522c(param_2 + 0x13U & 0x1fc);
  if (iVar1 != 0) {
    uVar5 = param_2 + 0x13U & 0xfffffffc;
    uVar2 = FUN_14075258();
    FUN_140e5658(uVar2,0,uVar5);
    iVar3 = FUN_14075258(iVar1);
    iVar6 = uVar5 - 0xc;
    *(undefined1 *)(iVar3 + iVar6) = 0x55;
    iVar3 = iVar3 + iVar6;
    *(undefined1 *)(iVar3 + 4) = 0;
    *(undefined1 *)(iVar3 + 5) = 0;
    *(undefined1 *)(iVar3 + 6) = 0;
    *(undefined1 *)(iVar3 + 7) = 0;
    *(undefined1 *)(iVar3 + 1) = 0x55;
    *(undefined4 *)(iVar3 + 8) = param_3;
    *(undefined1 *)(iVar3 + 2) = 0xff;
    *(undefined1 *)(iVar3 + 3) = 0xff;
    puVar4 = (undefined1 *)FUN_14075458(iVar1,4);
    *(short *)(puVar4 + 1) = (short)param_1;
    *puVar4 = 1;
    puVar4[3] = (char)param_2;
    *(int *)(iVar1 + 0xc) = iVar3;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x43,DAT_140777c0,DAT_140777bc,param_2,param_1);
}


/* FUN_140b567c @ 0x140b567c */

int FUN_140b567c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *DAT_140b5730;
  iVar1 = FUN_140b7c10(param_1,1,(uint)(param_2 != 0),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_140b5748,DAT_140b5744,0x3de,DAT_140b574c);
  }
  FUN_140b7d40(iVar1,3,1);
  iVar2 = FUN_140b6d80(param_1);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x14) = iVar1;
    *(uint *)(iVar2 + 0xc) = (uint)(param_2 != 0);
    FUN_140b93f8(iVar2 + 0x1c4,0,0);
    FUN_140b7cf0(iVar1,DAT_140b5734,iVar2);
    FUN_140b7d04(iVar1,DAT_140b5738,iVar2);
    FUN_140b7d18(iVar1,DAT_140b573c,iVar2);
    if (*DAT_140b5730 == iVar3) {
      return iVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x43,DAT_140b5748,DAT_140b5744,1000,DAT_140b5740);
}


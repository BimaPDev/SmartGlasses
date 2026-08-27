/* FUN_2c539718 @ 0x2c539718 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c539718(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5398c4,0x39b,_LAB_2c5398c0,_LAB_2c5398bc);
  }
  FUN_2c525874();
  FUN_2c5259c0();
  iVar3 = FUN_2c52674c();
  piVar2 = _LAB_2c5398a0;
  if (iVar3 != 0) {
    return;
  }
  uVar5 = *(undefined4 *)(param_2 + 0xc);
  uVar1 = *(undefined1 *)(param_2 + 4);
  if (*_LAB_2c5398a0 == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,0x10);
  FUN_2c530760(puVar4,0x14,0x14,uVar5,0,uVar1);
  *puVar4 = _DAT_2c5398a8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


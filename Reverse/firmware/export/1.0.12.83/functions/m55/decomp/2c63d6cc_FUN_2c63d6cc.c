/* FUN_2c63d6cc @ 0x2c63d6cc */

void FUN_2c63d6cc(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  piVar1 = DAT_2c63d75c;
  if ((*DAT_2c63d75c != 0) && (iVar3 = FUN_2c485770(), iVar3 == 0)) {
    FUN_2c485890(*piVar1);
    puVar4 = (undefined4 *)FUN_2c4858d8();
    puVar2 = DAT_2c63d760;
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined4 *)(param_2 + 4) = *puVar4;
      uVar5 = *puVar2;
      *(undefined1 *)(param_2 + 0xe) = *(undefined1 *)(puVar4 + 1);
      FUN_2c644044(uVar5,0xffffffff);
      uVar5 = FUN_2c485790(*piVar1);
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1e4,DAT_2c63d768,DAT_2c63d76c,DAT_2c63d764,uVar5);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1de,DAT_2c63d768,DAT_2c63d76c,DAT_2c63d774);
  }
  return;
}


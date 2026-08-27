/* FUN_2c4fb7cc @ 0x2c4fb7cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4fb7cc(undefined1 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_2c4fc02c(param_3);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x5c,_LAB_2c4fb878,_LAB_2c4fb874,_LAB_2c4fb870,DAT_2c4fb86c);
  }
  puVar2 = *(undefined1 **)(_LAB_2c4fb884 + param_3 * 4);
  func_0x2c4f6890(*puVar2,*(undefined2 *)(puVar2 + 2),param_1,param_2);
  if ((*DAT_2c4fb880 != 0) && (iVar1 = FUN_2c6471b4(*DAT_2c4fb880,10000), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4fb890,DAT_2c4fb88c,*param_1,iVar1);
  }
  return;
}


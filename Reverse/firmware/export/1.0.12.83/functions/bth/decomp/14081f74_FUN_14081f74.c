/* FUN_14081f74 @ 0x14081f74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14081f74(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined1 local_1c;
  int local_14;
  
  local_14 = *_LAB_14081ff0;
  if (*(char *)(param_1 + 0xf6) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,_LAB_14082000,_LAB_14081ffc,0);
  }
  local_24 = *_LAB_14081ff4;
  uStack_20 = _LAB_14081ff4[1];
  local_1c = (undefined1)_LAB_14081ff4[2];
  iVar1 = FUN_140dd3a4(&local_24);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(byte *)(param_1 + 0xec) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,_LAB_14082008,*(undefined1 *)(param_1 + 0xc),_LAB_14082004,
                   *(byte *)(param_1 + 0xec));
    }
    uVar2 = FUN_1407edac(param_1,_LAB_14081ff8,&local_24,iVar1,0,0xff);
  }
  if (*_LAB_14081ff0 == local_14) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}


/* FUN_2c493338 @ 0x2c493338 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_2c493338(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = _LAB_2c4933a4;
  puVar2 = (undefined1 *)FUN_2c6442f0(*_LAB_2c4933a4,0);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = param_3;
    puVar2[3] = param_4;
    *(undefined4 *)(puVar2 + 4) = param_5;
    iVar3 = *piVar1;
    *(undefined4 *)(puVar2 + 8) = param_6;
    puVar2[1] = param_1;
    puVar2[2] = param_2;
    if (iVar3 == 0) {
      uVar4 = 0xfffffffc;
    }
    else if (puVar2 == (undefined1 *)0x0) {
      uVar4 = 0xffffff81;
    }
    else {
      uVar4 = FUN_2c6450ec(*(undefined4 *)(iVar3 + 4),&stack0xfffffff4,0);
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xa3,_LAB_2c4933a0,_LAB_2c49339c,_LAB_2c493398);
}


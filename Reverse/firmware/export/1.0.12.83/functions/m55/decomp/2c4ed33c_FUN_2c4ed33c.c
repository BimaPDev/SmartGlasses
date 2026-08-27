/* FUN_2c4ed33c @ 0x2c4ed33c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4ed33c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  puVar4 = (undefined4 *)func_0x2c4ee01c();
  (*(code *)*puVar4)(param_1);
  puVar3 = _LAB_2c4ed36c;
  *_LAB_2c4ed370 = param_1;
  *puVar3 = 1;
  iVar5 = func_0x2c4911fc();
  *_LAB_2c4ed374 = (char)iVar5;
  uVar2 = _LAB_2c4911e8;
  uVar1 = _LAB_2c4911e4;
  if (iVar5 == 0) {
    return 0;
  }
  if (*_LAB_2c4911dc != '\0') {
    if (*_LAB_2c4911e0 == '\0') {
      *_LAB_2c4911dc = '\0';
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x135,_LAB_2c4911f0,_LAB_2c4911ec,uVar2,uVar1,unaff_r4,unaff_lr);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x12f,_LAB_2c4911f0,_LAB_2c4911ec,_LAB_2c4911f4,_LAB_2c4911e4,unaff_r4,unaff_lr);
  }
  return 0xffffffff;
}


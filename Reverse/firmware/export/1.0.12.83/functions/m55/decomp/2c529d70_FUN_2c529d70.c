/* FUN_2c529d70 @ 0x2c529d70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c529d70(void)

{
  int iStack_28;
  undefined1 uStack_24;
  int iStack_23;
  int iStack_1f;
  undefined2 uStack_1b;
  undefined1 uStack_19;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c529dc8;
  uStack_10 = 0xffffffff;
  uStack_18 = 0;
  uStack_14 = 0;
  iStack_23 = _LAB_2c529dcc[1];
  iStack_1f = _LAB_2c529dcc[2];
  iStack_28 = *_LAB_2c529dcc << 8;
  uStack_24 = (undefined1)((uint)*_LAB_2c529dcc >> 0x18);
  uStack_1b = (undefined2)_LAB_2c529dcc[3];
  uStack_19 = *(undefined1 *)((int)_LAB_2c529dcc + 0xe);
  FUN_2c52a4ac(&iStack_28);
  if (*_LAB_2c529dc8 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


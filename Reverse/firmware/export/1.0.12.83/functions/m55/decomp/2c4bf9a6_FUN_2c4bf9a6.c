/* FUN_2c4bf9a6 @ 0x2c4bf9a6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4bf9a6(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int unaff_r5;
  bool in_ZR;
  bool in_CY;
  
  iVar1 = _LAB_2c4bfa48;
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bfa64,param_1);
  }
  if (in_ZR != false) {
    unaff_r5 = _LAB_2c4bfa4c;
  }
  iVar2 = _LAB_2c4bfa48 + param_1 * 2;
  if (in_ZR == false) {
    unaff_r5 = _LAB_2c4bfa50;
  }
  if (*(char *)(iVar2 + param_2) != '\x02') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1b5,_LAB_2c4bfa60,_LAB_2c4bfa5c,_LAB_2c4bfa58,param_2,*(char *)(iVar2 + param_2));
  }
  *(undefined1 *)(iVar2 + param_2) = 1;
  if (((*(char *)(iVar1 + param_1 * 2) != '\x02') && (*(char *)(iVar2 + 1) != '\x02')) &&
     (*(char *)(_LAB_2c4bfa54 + param_1) == '\x01')) {
    func_0x2c673b98();
    *(undefined4 *)(unaff_r5 + 0xc) = 0;
  }
  if (param_2 == 0) {
    *(undefined4 *)(unaff_r5 + 8) = 0;
    *(uint *)(unaff_r5 + 0x1c8) = *(uint *)(unaff_r5 + 0x1c8) & 0xfffffffd;
    *(undefined4 *)(unaff_r5 + 0x2c) = 0;
    *(undefined4 *)(unaff_r5 + 0x54) = 1;
    return 0;
  }
  *(undefined4 *)(unaff_r5 + 4) = 0;
  *(uint *)(unaff_r5 + 0x1c8) = *(uint *)(unaff_r5 + 0x1c8) & 0xfffffffe;
  *(undefined4 *)(unaff_r5 + 0x28) = 0;
  *(undefined4 *)(unaff_r5 + 0x50) = 1;
  return 0;
}


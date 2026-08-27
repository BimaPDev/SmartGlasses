/* FUN_2c4f7e68 @ 0x2c4f7e68 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f7e68(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  undefined1 *puVar2;
  undefined4 extraout_r1;
  int iVar3;
  int unaff_r4;
  int *unaff_r6;
  int unaff_r7;
  char *unaff_r8;
  char in_ZR;
  int in_stack_0000000c;
  int in_stack_00000010;
  undefined4 in_stack_0000001c;
  undefined1 uStack00000020;
  undefined2 uStack00000022;
  undefined4 in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  uint in_stack_00000088;
  
  if (in_ZR != '\0') {
    func_0x2c4facac(0,&stack0x00000038,param_3,param_4,param_2,param_3,param_4);
    func_0x2c49130c();
  }
  psVar1 = _DAT_2c4f7fe8;
  uStack00000020 = 1;
  in_stack_0000001c = 1;
  iVar3 = in_stack_0000000c;
  if ((*unaff_r8 != '\x01') && (iVar3 = unaff_r7, *unaff_r8 != '\x02')) {
LAB_2c4f814a:
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_DAT_2c4f8170);
  }
  in_stack_00000034 = iVar3 << 2;
  uStack00000022 = 0xf;
  in_stack_00000030 = func_0x2c490260();
  in_stack_00000030 = in_stack_00000030 + *psVar1 + 0x1680;
  in_stack_0000002c = _LAB_2c4f7fec;
  if (unaff_r4 == 1) {
    func_0x2c4c3d1c();
    uStack00000022 = 0xf;
    in_stack_00000030 = func_0x2c490260();
    in_stack_00000030 = in_stack_00000030 + *psVar1 + 0x1a40;
    if (*unaff_r8 == '\x01') {
      in_stack_00000034 = in_stack_00000010 * 0x78;
      in_stack_0000002c = _LAB_2c4f816c;
      FUN_2c4c40ec();
      FUN_2c4c40ec(0);
      if (2 < *unaff_r6) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x705,_FUN_2c4f8158,uRam2c4f815c,_DAT_2c4f8154);
      }
    }
    else {
      if (*unaff_r8 != '\x02') goto LAB_2c4f814a;
      in_stack_00000034 = unaff_r7 << 2;
      in_stack_0000002c = _LAB_2c4f816c;
      FUN_2c4c40ec();
      FUN_2c4c40ec(0);
      if (2 < *unaff_r6) {
LAB_2c4f801a:
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x705,_FUN_2c4f8158,uRam2c4f815c,_DAT_2c4f8154);
      }
    }
    func_0x2c6739c8();
    *puRam2c4f8160 = 1;
    goto LAB_2c4f7cda;
  }
  uStack00000022 = 0xf;
  in_stack_00000030 = func_0x2c490260();
  in_stack_00000030 = in_stack_00000030 + *psVar1 + 0x1a40;
  if (*unaff_r8 == '\x01') {
    in_stack_00000034 = in_stack_0000000c << 2;
    if (unaff_r4 == 0) {
LAB_2c4f7ede:
      in_stack_0000002c = _LAB_2c4f7ff0;
      func_0x2c4c3d1c(1,0,&stack0x00000014);
      FUN_2c4c40ec(0,1);
      FUN_2c4c40ec(1,0);
      iVar3 = *unaff_r6;
    }
    else {
      iVar3 = *unaff_r6;
      in_stack_0000002c = _LAB_2c4f7ff0;
    }
    if (2 < iVar3) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x705,_FUN_2c4f7fd0,FUN_2c4f7fd0,_DAT_2c4f7ff4);
    }
  }
  else {
    if (*unaff_r8 != '\x02') goto LAB_2c4f814a;
    in_stack_00000034 = unaff_r7 << 2;
    in_stack_0000002c = _LAB_2c4f7ff0;
    if (unaff_r4 == 0) goto LAB_2c4f7ede;
    if (2 < *unaff_r6) goto LAB_2c4f801a;
  }
  func_0x2c6739c8();
  puVar2 = puRam2c4f8004;
  *puRam2c4f8000 = 1;
  *puVar2 = 1;
  FUN_2c490fb8(6,6,1);
  *puRam2c4f8008 = 1;
LAB_2c4f7cda:
  func_0x2c4b550c();
  *_LAB_2c4f7fb8 = 1;
  if ((*_LAB_2c4f7fb0 ^ in_stack_00000088) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(1,extraout_r1,*_LAB_2c4f7fb0 ^ in_stack_00000088,0);
}


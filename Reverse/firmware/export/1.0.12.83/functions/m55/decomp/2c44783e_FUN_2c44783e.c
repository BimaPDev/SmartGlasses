/* FUN_2c44783e @ 0x2c44783e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c44783e(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int unaff_r4;
  uint unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int unaff_lr;
  undefined1 in_ZR;
  undefined1 in_CY;
  
  do {
    *(int *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r7;
    *(int *)((int)register0x00000054 + -0xc) = unaff_r6;
    *(uint *)((int)register0x00000054 + -0x10) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x14) = unaff_r4;
    *(int **)((int)register0x00000054 + -0x18) = param_4;
    *(int *)((int)register0x00000054 + -0x1c) = param_3;
    if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1 = param_1 << 0x18;
    software_interrupt(0xea);
    *(char *)((int)param_4 + 0x12) = (char)param_4;
    piVar1 = (int *)param_4[0x13];
    *piVar1 = param_1;
    piVar1[1] = (int)piVar1;
    piVar1[2] = unaff_r6;
    piVar1[3] = unaff_r7;
    param_3 = _LAB_2c447c14;
    *(int *)(unaff_r6 + 0x30) = param_1;
    uVar2 = (uint)*(ushort *)(unaff_r6 + 0x3e);
    param_4 = (int *)((int)register0x00000054 + 0x150);
    unaff_r5 = (uint)*(byte *)(param_3 + 9);
    in_CY = 0xffffff00 < uVar2;
    in_ZR = uVar2 == 0xffffff01;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
  } while ((bool)in_ZR || SCARRY4(uVar2,0xff));
  if (uVar2 < 0xffffff02) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


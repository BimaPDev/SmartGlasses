/* FUN_2c434760 @ 0x2c434760 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c434760(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint unaff_r4;
  int *piVar6;
  uint *puVar7;
  uint *unaff_r5;
  uint unaff_r7;
  uint unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  uint *puVar8;
  undefined4 in_cr6;
  undefined4 in_cr7;
  
  do {
    *(uint *)((int)register0x00000054 + -4) = unaff_lr;
    *(uint *)((int)register0x00000054 + -8) = unaff_r7;
    *(uint **)((int)register0x00000054 + -0xc) = unaff_r5;
    *(uint *)((int)register0x00000054 + -0x10) = unaff_r4;
    puVar8 = (uint *)((int)register0x00000054 + -0x14);
    *puVar8 = param_4;
    *(short *)(unaff_r5 + 5) = (short)unaff_r4;
    puVar1 = (uint *)((int)register0x00000054 + 0x24);
    if (in_OV != '\0') {
      param_3 = (int)param_3 >> 4;
      *(undefined4 *)(param_3 + 0xbb5) = 0x9a;
      if (param_2 == 0) {
        uVar5 = *(uint *)((int)register0x00000054 + 0xb0);
        *(char *)(((uint)puVar1 >> 0xe) + param_1) = (char)param_1;
        iVar4 = uVar5 - (int)puVar1;
        *puVar8 = uVar5 << 7;
        *(undefined1 *)(iVar4 + 0x14) = 0;
        piVar6 = (int *)(int)(char)puVar1[unaff_r7 * 0x1000];
        *piVar6 = iVar4;
        piVar6[1] = 0;
        piVar6[2] = (int)piVar6;
        *(uint *)(param_3 + 0x74) = unaff_r7 * 0x4000;
        *(uint **)(iVar4 + 0x58) = (uint *)((int)register0x00000054 + 0x278);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      unaff_r5 = (uint *)((int)register0x00000054 + 0x2a);
      if (unaff_r5 == (uint *)0x0 || (int)puVar1 < -6) {
        return;
      }
      while( true ) {
        param_4 = (uint)*(ushort *)((int)unaff_r5 + param_3);
        *(undefined4 *)(*(ushort *)(param_1 + 0x30) + 0x2c434798) = 0x2c434798;
        uVar5 = *(uint *)((int)register0x00000054 + 8) - (int)unaff_r5;
        param_2 = (uint)*(char *)(param_1 + param_3);
        if (uVar5 == 0) break;
        in_OV = SBORROW4(param_2,0xd5);
        in_NG = (int)(param_2 - 0xd5) < 0;
        in_ZR = param_2 == 0xd5;
        if (0xd5 < (int)param_2) goto LAB_2c434742;
        software_bkpt(0x1b);
        *(char *)(uVar5 + 0xb) = (char)uVar5;
        *(uint *)(param_1 + param_4) = param_4;
        sVar3 = *(short *)(param_3 + (int)puVar1);
        param_3 = (uint)sVar3;
        bVar2 = *(byte *)(param_1 + 1);
        puVar7 = (uint *)(uint)*(byte *)(param_2 + 0x1e);
        *puVar7 = param_2;
        puVar7[1] = param_3;
        puVar7[2] = (uint)bVar2;
        puVar7[3] = uVar5;
        puVar7[4] = (uint)puVar1;
        unaff_r5 = puVar7 + 5;
        param_4 = 0;
        if (bVar2 == 0) goto LAB_2c43473e;
        unaff_r5 = (uint *)((int)puVar7 + 0x9d);
        *(short *)(param_1 + 0x12) = sVar3;
        *(char *)(param_1 + 0x1a) = (char)unaff_r7;
      }
      unaff_r5 = (uint *)(param_2 >> 0x11);
      *(short *)((int)puVar1 + (int)unaff_r5) = (short)_LAB_2c4348fc;
      in_OV = SBORROW4(_LAB_2c4348fc,0xef);
      in_NG = _LAB_2c4348fc + -0xef < 0;
      in_ZR = _LAB_2c4348fc == 0xef;
LAB_2c43473e:
      param_2 = *(uint *)(unaff_r7 + 0x3c);
      unaff_r5[4] = param_3;
    }
LAB_2c434742:
    *(uint **)(param_1 + 0x40) = unaff_r5;
    param_3 = (uint)*(ushort *)(param_3 + 0x2c);
    unaff_r4 = *(uint *)((int)register0x00000054 + 0xd0);
    if (!(bool)in_ZR && in_NG == in_OV) {
      *(uint *)((int)register0x00000054 + 0x174) = unaff_r7;
      *(char *)(param_1 + 1) = (char)unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (in_NG != '\0') {
      coprocessor_moveto(10,3,4,*(undefined4 *)(_LAB_2c434aec + 0x10),in_cr7,in_cr6);
      *(uint *)((int)register0x00000054 + 0x3b0) = unaff_r4 >> 10;
      if (unaff_r4 >> 10 != 0) {
        *(char *)(*(uint *)((int)register0x00000054 + 0x358) + 0x1b) = (char)unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_r5 = (uint *)((int)puVar1 >> 0xf);
    unaff_r7 = 0xf7;
    in_ZR = 0;
    in_NG = '\0';
    register0x00000054 = (BADSPACEBASE *)puVar8;
  } while( true );
}


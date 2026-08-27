/* FUN_2c6173f8 @ 0x2c6173f8 */

void FUN_2c6173f8(void)

{
  short sVar1;
  int in_r3;
  uint uVar2;
  int iVar3;
  int unaff_r4;
  uint uVar4;
  uint unaff_r5;
  uint unaff_r7;
  uint unaff_r8;
  int iVar5;
  int unaff_r9;
  int unaff_r10;
  int unaff_r11;
  int iVar6;
  int unaff_s16;
  undefined4 in_stack_00000008;
  short *in_stack_0000000c;
  uint in_stack_00000010;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  uint uStack0000001c;
  int in_stack_00000020;
  short in_stack_00000024;
  short in_stack_00000028;
  short sStack0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  short in_stack_0000003c;
  uint in_stack_00000040;
  uint in_stack_00000044;
  short sStack00000048;
  short sStack0000004a;
  short sStack0000004c;
  short sStack0000004e;
  short sStack00000060;
  short sStack00000062;
  short sStack00000064;
  short sStack00000066;
  undefined4 in_stack_00000068;
  short sStack00000074;
  short sStack00000076;
  int in_stack_00000114;
  
  do {
    if (in_r3 == unaff_r9) {
      if ((_sStack0000002c != 0) && (unaff_r7 != 0)) goto LAB_2c617bbe;
    }
    else {
      FUN_2c6120f4(unaff_s16,in_stack_00000008,&stack0x00000048,&stack0x0000004c);
      if ((unaff_r7 != 0) &&
         ((_sStack0000002c != 0 && (*(short *)(*(int *)(unaff_r10 + 4) + unaff_r4) != unaff_r9)))) {
LAB_2c617bbe:
        FUN_2c61319c(unaff_s16,in_stack_00000014,&stack0x00000060);
      }
    }
    do {
      FUN_2c602340();
      sVar1 = sStack0000004c;
      while( true ) {
        do {
          sStack0000004c = sVar1;
          uVar4 = unaff_r5 + 1;
          unaff_r5 = (uint)*(ushort *)(unaff_r11 + 0x82);
          uVar4 = uVar4 & 0xffff;
          if (unaff_r5 <= uVar4) {
            in_stack_00000010 = unaff_r8;
            if (unaff_r5 != uVar4) goto LAB_2c617190;
            goto LAB_2c617bdc;
          }
          iVar6 = (int)sStack0000004e;
          uVar2 = unaff_r5;
          unaff_r5 = uVar4;
          uStack0000001c = unaff_r8;
          while( true ) {
            sStack00000048 = sStack0000004c;
            sStack0000004a = (short)iVar6;
            if ((int)sStack0000004c <= (int)((int)in_stack_0000000c[2] + unaff_r7 + 1)) break;
            in_stack_00000010 = uStack0000001c;
            while( true ) {
              if (((in_stack_00000030 < in_stack_00000018) &&
                  (*(ushort *)(unaff_r11 + 0x82) == unaff_r5)) &&
                 (*(short *)(*(int *)(unaff_r10 + 4) + in_stack_00000010 * 2) != 0x7fff)) {
                sStack00000060 = sStack0000004c - (short)unaff_r7;
                sStack00000064 = sStack0000004c + (short)unaff_r7;
                sStack00000062 = sStack0000004e - sStack0000002c;
                sStack00000066 = sStack0000004e + sStack0000002c;
                FUN_2c602340();
                FUN_2c61319c(unaff_s16,in_stack_00000014,&stack0x00000060);
                FUN_2c602340();
              }
LAB_2c617190:
              do {
                unaff_r10 = FUN_2c62ca28();
                if (unaff_r10 == 0) {
                  *(short **)(unaff_s16 + 8) = in_stack_0000000c;
                  if (*DAT_2c61718c != in_stack_00000114) {
                    /* WARNING: Subroutine does not return */
                    stack_chk_fail();
                  }
                  FUN_2c616854();
                  return;
                }
                in_stack_00000010 = *(byte *)(unaff_r10 + 0xe) & 1;
              } while ((*(byte *)(unaff_r10 + 0xe) & 1) != 0);
              in_stack_00000068 = *(undefined4 *)(unaff_r10 + 8);
              if (-1 < (int)((uint)*(byte *)(unaff_r11 + 0x88) << 0x1c)) {
                in_stack_00000010 = (uint)*(short *)(unaff_r10 + 0xc);
              }
              sStack00000048 = in_stack_0000003c;
              iVar3 = unaff_r11 + ((int)((uint)*(byte *)(unaff_r10 + 0xe) << 0x1b) >> 0x1f) * -2;
              iVar6 = (int)*(short *)(iVar3 + 0x6c);
              sStack0000004e =
                   in_stack_00000028 -
                   (short)((in_stack_00000020 *
                           (*(short *)(*(int *)(unaff_r10 + 4) + in_stack_00000010 * 2) - iVar6)) /
                          (*(short *)(iVar3 + 0x70) - iVar6));
              sStack0000004c = sStack00000048;
              if (*(char *)(unaff_r11 + 0x8a) != '\0') {
                sStack00000074 = in_stack_00000024 - *(short *)(unaff_r11 + 0x8c);
                sStack00000076 = sStack0000004e;
                FUN_2c6120f4(unaff_s16,in_stack_00000008,&stack0x00000074,&stack0x0000004c);
              }
              FUN_2c600b9c(&stack0x00000074,unaff_s16);
              iVar6 = (int)sStack0000004e;
              uVar2 = (uint)*(ushort *)(unaff_r11 + 0x82);
              unaff_r5 = 0;
              if (uVar2 != 0) break;
LAB_2c617bdc:
              if (*(char *)(unaff_r11 + 0x8a) != '\0') {
                sStack00000060 = sStack0000004c + *(short *)(unaff_r11 + 0x8e);
                sStack00000062 = sStack0000004e;
                FUN_2c6120f4(unaff_s16,in_stack_00000008,&stack0x0000004c,&stack0x00000060);
              }
            }
            unaff_r5 = 0;
            in_stack_00000040 = unaff_r7 & 0xffff;
            in_stack_00000044 = _sStack0000002c & 0xffff;
            uStack0000001c = in_stack_00000010;
            in_stack_00000034 = iVar6;
            in_stack_00000038 = iVar6;
          }
          sVar1 = (short)((int)(unaff_r5 * in_stack_00000018) / (int)(uVar2 - 1)) +
                  in_stack_00000024;
          iVar5 = *(int *)(unaff_r10 + 4);
          unaff_r8 = (uint)(short)((short)(in_stack_00000010 + unaff_r5) -
                                  (short)uVar2 *
                                  (short)((int)(in_stack_00000010 + unaff_r5) / (int)uVar2));
          iVar6 = unaff_r11 + ((int)((uint)*(byte *)(unaff_r10 + 0xe) << 0x1b) >> 0x1f) * -2;
          iVar3 = (int)*(short *)(iVar6 + 0x6c);
          sStack0000004e =
               in_stack_00000028 -
               (short)((in_stack_00000020 * (*(short *)(iVar5 + unaff_r8 * 2) - iVar3)) /
                      (*(short *)(iVar6 + 0x70) - iVar3));
          iVar6 = (int)sStack0000004e;
        } while (((int)sVar1 < (int)(((int)*in_stack_0000000c - unaff_r7) + -1)) || (unaff_r5 == 0))
        ;
        if (in_stack_00000030 < in_stack_00000018) break;
        if ((*(short *)(iVar5 + uStack0000001c * 2) != 0x7fff) &&
           (*(short *)(iVar5 + unaff_r8 * 2) != 0x7fff)) {
          if (in_stack_00000034 < iVar6) {
            in_stack_00000034 = iVar6;
          }
          if (iVar6 <= in_stack_00000038) {
            in_stack_00000038 = iVar6;
          }
          if ((int)sStack0000004c != (int)sVar1) {
            sStack00000048 = sVar1 + -1;
            sStack0000004a = (short)in_stack_00000038;
            sStack0000004e = (short)in_stack_00000034;
            if (in_stack_00000034 == in_stack_00000038) {
              sStack0000004e = sStack0000004e + 1;
            }
            sStack0000004c = sStack00000048;
            FUN_2c6120f4(unaff_s16,in_stack_00000008,&stack0x00000048,&stack0x0000004c);
            in_stack_00000034 = iVar6;
            in_stack_00000038 = iVar6;
            sVar1 = sStack0000004c + 1;
          }
        }
      }
      unaff_r9 = 0x7fff;
      sStack00000060 = sStack0000004c - (short)in_stack_00000040;
      sStack00000064 = sStack0000004c + (short)in_stack_00000040;
      sStack00000062 = sStack0000004a - (short)in_stack_00000044;
      sStack00000066 = sStack0000004a + (short)in_stack_00000044;
      unaff_r4 = uStack0000001c * 2;
      sStack0000004c = sVar1;
      FUN_2c602340();
    } while (*(short *)(*(int *)(unaff_r10 + 4) + unaff_r4) == 0x7fff);
    in_r3 = (int)*(short *)(*(int *)(unaff_r10 + 4) + unaff_r8 * 2);
  } while( true );
}


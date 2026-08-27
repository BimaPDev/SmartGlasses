/* FUN_2c00657c @ 0x2c00657c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c00657c(undefined4 param_1,uint param_2,uint param_3,byte param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint unaff_r4;
  uint uVar5;
  uint unaff_r5;
  byte *unaff_r6;
  int iVar6;
  int unaff_r8;
  uint *puVar7;
  uint uVar8;
  int unaff_r11;
  uint uVar9;
  int iVar10;
  int in_stack_00000014;
  uint uStack00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  
  iVar6 = param_2 << 0xc;
  do {
    iVar3 = *(int *)(unaff_r8 + 0x18);
    *(byte *)(iVar3 + param_2) = param_4 | (byte)(param_3 >> 4);
    *(byte *)(iVar3 + (unaff_r5 >> 1) + -1) =
         *(byte *)(iVar6 + 0xd) & 0xf0 | *(byte *)(iVar6 + 9) >> 4;
    uVar5 = unaff_r5;
    iVar3 = unaff_r11;
LAB_2c005ee0:
    while( true ) {
      do {
        uStack00000018 = in_stack_00000024 + uVar5;
        uVar8 = in_stack_00000014 - unaff_r4 >> 3;
        puVar1 = (uint *)(*(int *)(unaff_r8 + 0x18) + (uStack00000018 >> 1) + 1);
        pbVar4 = unaff_r6;
        if (uVar8 != 0) {
          puVar7 = puVar1 + -uVar8;
          do {
            puVar1 = puVar1 + -1;
            *puVar1 = (*pbVar4 & 0xf0) << 0x14 | (pbVar4[4] & 0xf0) << 0x18 |
                      (pbVar4[8] & 0xf0) << 0xc | (pbVar4[0xc] & 0xf0) << 0x10 |
                      (pbVar4[0x10] & 0xf0) << 4 | (pbVar4[0x14] & 0xf0) << 8 |
                      pbVar4[0x1c] & 0xfffffff0 | (uint)(pbVar4[0x18] >> 4);
            pbVar4 = pbVar4 + 0x20;
          } while (puVar7 != puVar1);
          pbVar4 = unaff_r6 + uVar8 * 0x20;
        }
        uVar9 = in_stack_00000014 - unaff_r4 & 0xfffffff8;
        uVar8 = in_stack_00000014 - (uVar9 | unaff_r4);
        if ((int)uVar8 < 1) {
          if (uVar8 != 0) {
            puVar1 = (uint *)FUN_2c013c4c(3,DAT_2c0061ac,0x174,DAT_2c0061b0);
          }
        }
        else {
          uVar9 = uStack00000018 - uVar9;
          uVar8 = uVar9 * 0x100 & 0x100 | uVar8;
          if (uVar8 < 8) {
            switch(uVar8) {
            case 2:
              iVar2 = *(int *)(unaff_r8 + 0x18);
              puVar1 = (uint *)(uVar9 >> 1);
              iVar10 = iVar2 + (uVar9 >> 1);
              *(byte *)(iVar2 + (int)puVar1) = *(byte *)(iVar2 + (int)puVar1) & 0xf | *pbVar4 & 0xf0
              ;
              *(byte *)(iVar10 + -1) = *(byte *)(iVar10 + -1) & 0xf0 | pbVar4[4] >> 4;
              break;
            case 3:
              iVar2 = *(int *)(unaff_r8 + 0x18);
              puVar1 = (uint *)(uVar9 >> 1);
              *(byte *)(iVar2 + (int)puVar1) = *(byte *)(iVar2 + (int)puVar1) & 0xf | *pbVar4 & 0xf0
              ;
              *(byte *)(iVar2 + (uVar9 >> 1) + -1) = pbVar4[8] & 0xf0 | pbVar4[4] >> 4;
              break;
            case 4:
              iVar2 = *(int *)(unaff_r8 + 0x18);
              puVar1 = (uint *)(uVar9 >> 1);
              iVar10 = iVar2 + (uVar9 >> 1);
              *(byte *)(iVar2 + (int)puVar1) = *(byte *)(iVar2 + (int)puVar1) & 0xf | *pbVar4 & 0xf0
              ;
              *(byte *)(iVar10 + -1) = pbVar4[8] & 0xf0 | pbVar4[4] >> 4;
              *(byte *)(iVar10 + -2) = *(byte *)(iVar10 + -2) & 0xf0 | pbVar4[0xc] >> 4;
              break;
            case 5:
              iVar2 = *(int *)(unaff_r8 + 0x18);
              puVar1 = (uint *)(uVar9 >> 1);
              iVar10 = iVar2 + (uVar9 >> 1);
              *(byte *)(iVar2 + (int)puVar1) = *(byte *)(iVar2 + (int)puVar1) & 0xf | *pbVar4 & 0xf0
              ;
              *(byte *)(iVar10 + -1) = pbVar4[8] & 0xf0 | pbVar4[4] >> 4;
              *(byte *)(iVar10 + -2) = pbVar4[0x10] & 0xf0 | pbVar4[0xc] >> 4;
              break;
            case 6:
              iVar2 = *(int *)(unaff_r8 + 0x18);
              puVar1 = (uint *)(uVar9 >> 1);
              iVar10 = iVar2 + (uVar9 >> 1);
              *(byte *)(iVar2 + (int)puVar1) = *(byte *)(iVar2 + (int)puVar1) & 0xf | *pbVar4 & 0xf0
              ;
              *(byte *)(iVar10 + -1) = pbVar4[8] & 0xf0 | pbVar4[4] >> 4;
              *(byte *)(iVar10 + -2) = pbVar4[0x10] & 0xf0 | pbVar4[0xc] >> 4;
              *(byte *)(iVar10 + -3) = *(byte *)(iVar10 + -3) & 0xf0 | pbVar4[0x14] >> 4;
              break;
            case 7:
              iVar2 = *(int *)(unaff_r8 + 0x18);
              puVar1 = (uint *)(uVar9 >> 1);
              iVar10 = iVar2 + (uVar9 >> 1);
              *(byte *)(iVar2 + (int)puVar1) = *(byte *)(iVar2 + (int)puVar1) & 0xf | *pbVar4 & 0xf0
              ;
              *(byte *)(iVar10 + -1) = pbVar4[8] & 0xf0 | pbVar4[4] >> 4;
              *(byte *)(iVar10 + -2) = pbVar4[0x10] & 0xf0 | pbVar4[0xc] >> 4;
              *(byte *)(iVar10 + -3) = pbVar4[0x18] & 0xf0 | pbVar4[0x14] >> 4;
              break;
            default:
              *(byte *)(*(int *)(unaff_r8 + 0x18) + (uVar9 >> 1)) =
                   *(byte *)(*(int *)(unaff_r8 + 0x18) + (uVar9 >> 1)) & 0xf | *pbVar4 & 0xf0;
            }
          }
          else {
            switch(uVar8) {
            case 0x101:
              puVar1 = (uint *)(uint)*pbVar4;
              uVar8 = uVar9 - 1 >> 1;
              *(byte *)(*(int *)(unaff_r8 + 0x18) + uVar8) =
                   *(byte *)(*(int *)(unaff_r8 + 0x18) + uVar8) & 0xf0 | *pbVar4 >> 4;
              break;
            case 0x102:
              puVar1 = (uint *)(uint)*pbVar4;
              *(byte *)(*(int *)(unaff_r8 + 0x18) + (uVar9 - 1 >> 1)) =
                   pbVar4[4] & 0xf0 | *pbVar4 >> 4;
              break;
            case 0x103:
              puVar1 = *(uint **)(unaff_r8 + 0x18);
              uVar8 = uVar9 - 1 >> 1;
              *(byte *)((int)puVar1 + (uVar9 - 1 >> 1)) = pbVar4[4] & 0xf0 | *pbVar4 >> 4;
              *(byte *)((int)puVar1 + (uVar8 - 1)) =
                   *(byte *)((int)puVar1 + (uVar8 - 1)) & 0xf0 | pbVar4[8] >> 4;
              break;
            case 0x104:
              iVar2 = *(int *)(unaff_r8 + 0x18);
              *(byte *)(iVar2 + (uVar9 - 1 >> 1)) = pbVar4[4] & 0xf0 | *pbVar4 >> 4;
              puVar1 = (uint *)(uint)pbVar4[8];
              *(byte *)(iVar2 + (uVar9 - 1 >> 1) + -1) = pbVar4[0xc] & 0xf0 | pbVar4[8] >> 4;
              break;
            case 0x105:
              iVar2 = *(int *)(unaff_r8 + 0x18);
              *(byte *)(iVar2 + (uVar9 - 1 >> 1)) = pbVar4[4] & 0xf0 | *pbVar4 >> 4;
              iVar2 = iVar2 + (uVar9 - 1 >> 1);
              puVar1 = (uint *)(uint)pbVar4[8];
              *(byte *)(iVar2 + -1) = pbVar4[0xc] & 0xf0 | pbVar4[8] >> 4;
              *(byte *)(iVar2 + -2) = *(byte *)(iVar2 + -2) & 0xf0 | pbVar4[0x10] >> 4;
              break;
            case 0x106:
              iVar2 = *(int *)(unaff_r8 + 0x18);
              *(byte *)(iVar2 + (uVar9 - 1 >> 1)) = pbVar4[4] & 0xf0 | *pbVar4 >> 4;
              iVar2 = iVar2 + (uVar9 - 1 >> 1);
              *(byte *)(iVar2 + -1) = pbVar4[0xc] & 0xf0 | pbVar4[8] >> 4;
              puVar1 = (uint *)(uint)pbVar4[0x10];
              *(byte *)(iVar2 + -2) = pbVar4[0x14] & 0xf0 | pbVar4[0x10] >> 4;
              break;
            case 0x107:
              iVar2 = *(int *)(unaff_r8 + 0x18);
              *(byte *)(iVar2 + (uVar9 - 1 >> 1)) = pbVar4[4] & 0xf0 | *pbVar4 >> 4;
              iVar2 = iVar2 + (uVar9 - 1 >> 1);
              *(byte *)(iVar2 + -1) = pbVar4[0xc] & 0xf0 | pbVar4[8] >> 4;
              puVar1 = (uint *)(uint)pbVar4[0x10];
              *(byte *)(iVar2 + -2) = pbVar4[0x14] & 0xf0 | pbVar4[0x10] >> 4;
              *(byte *)(iVar2 + -3) = *(byte *)(iVar2 + -3) & 0xf0 | pbVar4[0x18] >> 4;
              break;
            default:
              puVar1 = (uint *)FUN_2c013c4c(3,_DAT_2c0066b0,0x171,_DAT_2c0066ac);
            }
          }
        }
        unaff_r11 = iVar3 + 1;
        unaff_r5 = uVar5 + 0x280;
        unaff_r6 = unaff_r6 + in_stack_00000020;
        iVar6 = iVar6 + in_stack_00000020;
        if (in_stack_0000001c == iVar3) {
                    /* WARNING: Could not recover jumptable at 0x2c013d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*_DAT_2c013d18)(puVar1);
          return;
        }
        uVar8 = uVar5 + 0x281;
        unaff_r4 = uVar5 + 0x282 & 7;
        uVar5 = unaff_r5;
        iVar3 = unaff_r11;
      } while (unaff_r4 == 0);
      uVar9 = uVar8 * 0x100 & 0x100 | unaff_r4;
      if (7 < uVar9) break;
      switch(uVar9) {
      case 2:
        iVar2 = *(int *)(unaff_r8 + 0x18);
        iVar10 = iVar2 + (uVar8 >> 1);
        *(byte *)(iVar2 + (uVar8 >> 1)) =
             *(byte *)(iVar2 + (uVar8 >> 1)) & 0xf | *(byte *)(iVar6 + 1) & 0xf0;
        *(byte *)(iVar10 + -1) = *(byte *)(iVar10 + -1) & 0xf0 | *(byte *)(iVar6 + 5) >> 4;
        break;
      case 3:
        iVar2 = *(int *)(unaff_r8 + 0x18);
        *(byte *)(iVar2 + (uVar8 >> 1)) =
             *(byte *)(iVar2 + (uVar8 >> 1)) & 0xf | *(byte *)(iVar6 + 1) & 0xf0;
        *(byte *)(iVar2 + (uVar8 >> 1) + -1) =
             *(byte *)(iVar6 + 9) & 0xf0 | *(byte *)(iVar6 + 5) >> 4;
        break;
      case 4:
        iVar2 = *(int *)(unaff_r8 + 0x18);
        iVar10 = iVar2 + (uVar8 >> 1);
        *(byte *)(iVar2 + (uVar8 >> 1)) =
             *(byte *)(iVar2 + (uVar8 >> 1)) & 0xf | *(byte *)(iVar6 + 1) & 0xf0;
        *(byte *)(iVar10 + -1) = *(byte *)(iVar6 + 9) & 0xf0 | *(byte *)(iVar6 + 5) >> 4;
        *(byte *)(iVar10 + -2) = *(byte *)(iVar10 + -2) & 0xf0 | *(byte *)(iVar6 + 0xd) >> 4;
        break;
      case 5:
        iVar2 = *(int *)(unaff_r8 + 0x18);
        iVar10 = iVar2 + (uVar8 >> 1);
        *(byte *)(iVar2 + (uVar8 >> 1)) =
             *(byte *)(iVar2 + (uVar8 >> 1)) & 0xf | *(byte *)(iVar6 + 1) & 0xf0;
        *(byte *)(iVar10 + -1) = *(byte *)(iVar6 + 9) & 0xf0 | *(byte *)(iVar6 + 5) >> 4;
        *(byte *)(iVar10 + -2) = *(byte *)(iVar6 + 0x11) & 0xf0 | *(byte *)(iVar6 + 0xd) >> 4;
        break;
      case 6:
        iVar2 = *(int *)(unaff_r8 + 0x18);
        iVar10 = iVar2 + (uVar8 >> 1);
        *(byte *)(iVar2 + (uVar8 >> 1)) =
             *(byte *)(iVar2 + (uVar8 >> 1)) & 0xf | *(byte *)(iVar6 + 1) & 0xf0;
        *(byte *)(iVar10 + -1) = *(byte *)(iVar6 + 9) & 0xf0 | *(byte *)(iVar6 + 5) >> 4;
        *(byte *)(iVar10 + -2) = *(byte *)(iVar6 + 0x11) & 0xf0 | *(byte *)(iVar6 + 0xd) >> 4;
        *(byte *)(iVar10 + -3) = *(byte *)(iVar10 + -3) & 0xf0 | *(byte *)(iVar6 + 0x15) >> 4;
        break;
      case 7:
        iVar2 = *(int *)(unaff_r8 + 0x18);
        iVar10 = iVar2 + (uVar8 >> 1);
        *(byte *)(iVar2 + (uVar8 >> 1)) =
             *(byte *)(iVar2 + (uVar8 >> 1)) & 0xf | *(byte *)(iVar6 + 1) & 0xf0;
        *(byte *)(iVar10 + -1) = *(byte *)(iVar6 + 9) & 0xf0 | *(byte *)(iVar6 + 5) >> 4;
        *(byte *)(iVar10 + -2) = *(byte *)(iVar6 + 0x11) & 0xf0 | *(byte *)(iVar6 + 0xd) >> 4;
        *(byte *)(iVar10 + -3) = *(byte *)(iVar6 + 0x19) & 0xf0 | *(byte *)(iVar6 + 0x15) >> 4;
        break;
      default:
        *(byte *)(*(int *)(unaff_r8 + 0x18) + (uVar8 >> 1)) =
             *(byte *)(*(int *)(unaff_r8 + 0x18) + (uVar8 >> 1)) & 0xf | *(byte *)(iVar6 + 1) & 0xf0
        ;
      }
    }
    switch(uVar9) {
    case 0x101:
      *(byte *)(*(int *)(unaff_r8 + 0x18) + (unaff_r5 >> 1)) =
           *(byte *)(*(int *)(unaff_r8 + 0x18) + (unaff_r5 >> 1)) & 0xf0 | *(byte *)(iVar6 + 1) >> 4
      ;
      goto LAB_2c005ee0;
    case 0x102:
      *(byte *)(*(int *)(unaff_r8 + 0x18) + (unaff_r5 >> 1)) =
           *(byte *)(iVar6 + 5) & 0xf0 | *(byte *)(iVar6 + 1) >> 4;
      goto LAB_2c005ee0;
    case 0x103:
      iVar2 = *(int *)(unaff_r8 + 0x18) + (unaff_r5 >> 1);
      *(byte *)(*(int *)(unaff_r8 + 0x18) + (unaff_r5 >> 1)) =
           *(byte *)(iVar6 + 5) & 0xf0 | *(byte *)(iVar6 + 1) >> 4;
      *(byte *)(iVar2 + -1) = *(byte *)(iVar2 + -1) & 0xf0 | *(byte *)(iVar6 + 9) >> 4;
      goto LAB_2c005ee0;
    case 0x104:
      param_2 = unaff_r5 >> 1;
      param_3 = (uint)*(byte *)(iVar6 + 1);
      param_4 = *(byte *)(iVar6 + 5) & 0xf0;
      break;
    case 0x105:
      iVar2 = *(int *)(unaff_r8 + 0x18);
      *(byte *)(iVar2 + (unaff_r5 >> 1)) = *(byte *)(iVar6 + 5) & 0xf0 | *(byte *)(iVar6 + 1) >> 4;
      iVar2 = iVar2 + (unaff_r5 >> 1);
      *(byte *)(iVar2 + -1) = *(byte *)(iVar6 + 0xd) & 0xf0 | *(byte *)(iVar6 + 9) >> 4;
      *(byte *)(iVar2 + -2) = *(byte *)(iVar2 + -2) & 0xf0 | *(byte *)(iVar6 + 0x11) >> 4;
      goto LAB_2c005ee0;
    case 0x106:
      iVar2 = *(int *)(unaff_r8 + 0x18);
      *(byte *)(iVar2 + (unaff_r5 >> 1)) = *(byte *)(iVar6 + 5) & 0xf0 | *(byte *)(iVar6 + 1) >> 4;
      iVar2 = iVar2 + (unaff_r5 >> 1);
      *(byte *)(iVar2 + -1) = *(byte *)(iVar6 + 0xd) & 0xf0 | *(byte *)(iVar6 + 9) >> 4;
      *(byte *)(iVar2 + -2) = *(byte *)(iVar6 + 0x15) & 0xf0 | *(byte *)(iVar6 + 0x11) >> 4;
      goto LAB_2c005ee0;
    case 0x107:
      iVar2 = *(int *)(unaff_r8 + 0x18);
      *(byte *)(iVar2 + (unaff_r5 >> 1)) = *(byte *)(iVar6 + 5) & 0xf0 | *(byte *)(iVar6 + 1) >> 4;
      iVar2 = iVar2 + (unaff_r5 >> 1);
      *(byte *)(iVar2 + -1) = *(byte *)(iVar6 + 0xd) & 0xf0 | *(byte *)(iVar6 + 9) >> 4;
      *(byte *)(iVar2 + -2) = *(byte *)(iVar6 + 0x15) & 0xf0 | *(byte *)(iVar6 + 0x11) >> 4;
      *(byte *)(iVar2 + -3) = *(byte *)(iVar2 + -3) & 0xf0 | *(byte *)(iVar6 + 0x19) >> 4;
      goto LAB_2c005ee0;
    default:
      FUN_2c013c4c(3,DAT_2c0061ac,0xc3,DAT_2c0061b0);
      goto LAB_2c005ee0;
    }
  } while( true );
}


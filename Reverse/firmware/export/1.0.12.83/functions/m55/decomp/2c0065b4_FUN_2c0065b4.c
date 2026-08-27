/* FUN_2c0065b4 @ 0x2c0065b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0065b4(uint param_1,int param_2,int param_3,byte param_4)

{
  uint *puVar1;
  int iVar2;
  byte *pbVar3;
  uint unaff_r4;
  uint uVar4;
  uint unaff_r5;
  byte *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int unaff_r11;
  uint uVar8;
  int iVar9;
  int in_stack_00000014;
  uint uStack00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  
  do {
    *(byte *)(param_2 + param_1) = param_4;
    *(byte *)(param_3 + -1) = *(byte *)(param_3 + -1) & 0xf0 | *(byte *)(unaff_r7 + 9) >> 4;
    uVar4 = unaff_r5;
    iVar7 = unaff_r11;
LAB_2c005ee0:
    while( true ) {
      do {
        uStack00000018 = in_stack_00000024 + uVar4;
        uVar6 = in_stack_00000014 - unaff_r4 >> 3;
        puVar1 = (uint *)(*(int *)(unaff_r8 + 0x18) + (uStack00000018 >> 1) + 1);
        pbVar3 = unaff_r6;
        if (uVar6 != 0) {
          puVar5 = puVar1 + -uVar6;
          do {
            puVar1 = puVar1 + -1;
            *puVar1 = (*pbVar3 & 0xf0) << 0x14 | (pbVar3[4] & 0xf0) << 0x18 |
                      (pbVar3[8] & 0xf0) << 0xc | (pbVar3[0xc] & 0xf0) << 0x10 |
                      (pbVar3[0x10] & 0xf0) << 4 | (pbVar3[0x14] & 0xf0) << 8 |
                      pbVar3[0x1c] & 0xfffffff0 | (uint)(pbVar3[0x18] >> 4);
            pbVar3 = pbVar3 + 0x20;
          } while (puVar5 != puVar1);
          pbVar3 = unaff_r6 + uVar6 * 0x20;
        }
        uVar8 = in_stack_00000014 - unaff_r4 & 0xfffffff8;
        uVar6 = in_stack_00000014 - (uVar8 | unaff_r4);
        if ((int)uVar6 < 1) {
          if (uVar6 != 0) {
            puVar1 = (uint *)FUN_2c013c4c(3,DAT_2c0061ac,0x174,DAT_2c0061b0);
          }
        }
        else {
          uVar8 = uStack00000018 - uVar8;
          uVar6 = uVar8 * 0x100 & 0x100 | uVar6;
          if (uVar6 < 8) {
            switch(uVar6) {
            case 2:
              iVar2 = *(int *)(unaff_r8 + 0x18);
              puVar1 = (uint *)(uVar8 >> 1);
              iVar9 = iVar2 + (uVar8 >> 1);
              *(byte *)(iVar2 + (int)puVar1) = *(byte *)(iVar2 + (int)puVar1) & 0xf | *pbVar3 & 0xf0
              ;
              *(byte *)(iVar9 + -1) = *(byte *)(iVar9 + -1) & 0xf0 | pbVar3[4] >> 4;
              break;
            case 3:
              iVar2 = *(int *)(unaff_r8 + 0x18);
              puVar1 = (uint *)(uVar8 >> 1);
              *(byte *)(iVar2 + (int)puVar1) = *(byte *)(iVar2 + (int)puVar1) & 0xf | *pbVar3 & 0xf0
              ;
              *(byte *)(iVar2 + (uVar8 >> 1) + -1) = pbVar3[8] & 0xf0 | pbVar3[4] >> 4;
              break;
            case 4:
              iVar2 = *(int *)(unaff_r8 + 0x18);
              puVar1 = (uint *)(uVar8 >> 1);
              iVar9 = iVar2 + (uVar8 >> 1);
              *(byte *)(iVar2 + (int)puVar1) = *(byte *)(iVar2 + (int)puVar1) & 0xf | *pbVar3 & 0xf0
              ;
              *(byte *)(iVar9 + -1) = pbVar3[8] & 0xf0 | pbVar3[4] >> 4;
              *(byte *)(iVar9 + -2) = *(byte *)(iVar9 + -2) & 0xf0 | pbVar3[0xc] >> 4;
              break;
            case 5:
              iVar2 = *(int *)(unaff_r8 + 0x18);
              puVar1 = (uint *)(uVar8 >> 1);
              iVar9 = iVar2 + (uVar8 >> 1);
              *(byte *)(iVar2 + (int)puVar1) = *(byte *)(iVar2 + (int)puVar1) & 0xf | *pbVar3 & 0xf0
              ;
              *(byte *)(iVar9 + -1) = pbVar3[8] & 0xf0 | pbVar3[4] >> 4;
              *(byte *)(iVar9 + -2) = pbVar3[0x10] & 0xf0 | pbVar3[0xc] >> 4;
              break;
            case 6:
              iVar2 = *(int *)(unaff_r8 + 0x18);
              puVar1 = (uint *)(uVar8 >> 1);
              iVar9 = iVar2 + (uVar8 >> 1);
              *(byte *)(iVar2 + (int)puVar1) = *(byte *)(iVar2 + (int)puVar1) & 0xf | *pbVar3 & 0xf0
              ;
              *(byte *)(iVar9 + -1) = pbVar3[8] & 0xf0 | pbVar3[4] >> 4;
              *(byte *)(iVar9 + -2) = pbVar3[0x10] & 0xf0 | pbVar3[0xc] >> 4;
              *(byte *)(iVar9 + -3) = *(byte *)(iVar9 + -3) & 0xf0 | pbVar3[0x14] >> 4;
              break;
            case 7:
              iVar2 = *(int *)(unaff_r8 + 0x18);
              puVar1 = (uint *)(uVar8 >> 1);
              iVar9 = iVar2 + (uVar8 >> 1);
              *(byte *)(iVar2 + (int)puVar1) = *(byte *)(iVar2 + (int)puVar1) & 0xf | *pbVar3 & 0xf0
              ;
              *(byte *)(iVar9 + -1) = pbVar3[8] & 0xf0 | pbVar3[4] >> 4;
              *(byte *)(iVar9 + -2) = pbVar3[0x10] & 0xf0 | pbVar3[0xc] >> 4;
              *(byte *)(iVar9 + -3) = pbVar3[0x18] & 0xf0 | pbVar3[0x14] >> 4;
              break;
            default:
              *(byte *)(*(int *)(unaff_r8 + 0x18) + (uVar8 >> 1)) =
                   *(byte *)(*(int *)(unaff_r8 + 0x18) + (uVar8 >> 1)) & 0xf | *pbVar3 & 0xf0;
            }
          }
          else {
            switch(uVar6) {
            case 0x101:
              puVar1 = (uint *)(uint)*pbVar3;
              uVar6 = uVar8 - 1 >> 1;
              *(byte *)(*(int *)(unaff_r8 + 0x18) + uVar6) =
                   *(byte *)(*(int *)(unaff_r8 + 0x18) + uVar6) & 0xf0 | *pbVar3 >> 4;
              break;
            case 0x102:
              puVar1 = (uint *)(uint)*pbVar3;
              *(byte *)(*(int *)(unaff_r8 + 0x18) + (uVar8 - 1 >> 1)) =
                   pbVar3[4] & 0xf0 | *pbVar3 >> 4;
              break;
            case 0x103:
              puVar1 = *(uint **)(unaff_r8 + 0x18);
              uVar6 = uVar8 - 1 >> 1;
              *(byte *)((int)puVar1 + (uVar8 - 1 >> 1)) = pbVar3[4] & 0xf0 | *pbVar3 >> 4;
              *(byte *)((int)puVar1 + (uVar6 - 1)) =
                   *(byte *)((int)puVar1 + (uVar6 - 1)) & 0xf0 | pbVar3[8] >> 4;
              break;
            case 0x104:
              iVar2 = *(int *)(unaff_r8 + 0x18);
              *(byte *)(iVar2 + (uVar8 - 1 >> 1)) = pbVar3[4] & 0xf0 | *pbVar3 >> 4;
              puVar1 = (uint *)(uint)pbVar3[8];
              *(byte *)(iVar2 + (uVar8 - 1 >> 1) + -1) = pbVar3[0xc] & 0xf0 | pbVar3[8] >> 4;
              break;
            case 0x105:
              iVar2 = *(int *)(unaff_r8 + 0x18);
              *(byte *)(iVar2 + (uVar8 - 1 >> 1)) = pbVar3[4] & 0xf0 | *pbVar3 >> 4;
              iVar2 = iVar2 + (uVar8 - 1 >> 1);
              puVar1 = (uint *)(uint)pbVar3[8];
              *(byte *)(iVar2 + -1) = pbVar3[0xc] & 0xf0 | pbVar3[8] >> 4;
              *(byte *)(iVar2 + -2) = *(byte *)(iVar2 + -2) & 0xf0 | pbVar3[0x10] >> 4;
              break;
            case 0x106:
              iVar2 = *(int *)(unaff_r8 + 0x18);
              *(byte *)(iVar2 + (uVar8 - 1 >> 1)) = pbVar3[4] & 0xf0 | *pbVar3 >> 4;
              iVar2 = iVar2 + (uVar8 - 1 >> 1);
              *(byte *)(iVar2 + -1) = pbVar3[0xc] & 0xf0 | pbVar3[8] >> 4;
              puVar1 = (uint *)(uint)pbVar3[0x10];
              *(byte *)(iVar2 + -2) = pbVar3[0x14] & 0xf0 | pbVar3[0x10] >> 4;
              break;
            case 0x107:
              iVar2 = *(int *)(unaff_r8 + 0x18);
              *(byte *)(iVar2 + (uVar8 - 1 >> 1)) = pbVar3[4] & 0xf0 | *pbVar3 >> 4;
              iVar2 = iVar2 + (uVar8 - 1 >> 1);
              *(byte *)(iVar2 + -1) = pbVar3[0xc] & 0xf0 | pbVar3[8] >> 4;
              puVar1 = (uint *)(uint)pbVar3[0x10];
              *(byte *)(iVar2 + -2) = pbVar3[0x14] & 0xf0 | pbVar3[0x10] >> 4;
              *(byte *)(iVar2 + -3) = *(byte *)(iVar2 + -3) & 0xf0 | pbVar3[0x18] >> 4;
              break;
            default:
              puVar1 = (uint *)FUN_2c013c4c(3,_DAT_2c0066b0,0x171,_DAT_2c0066ac);
            }
          }
        }
        unaff_r11 = iVar7 + 1;
        unaff_r5 = uVar4 + 0x280;
        unaff_r6 = unaff_r6 + in_stack_00000020;
        unaff_r7 = unaff_r7 + in_stack_00000020;
        if (in_stack_0000001c == iVar7) {
                    /* WARNING: Could not recover jumptable at 0x2c013d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*_DAT_2c013d18)(puVar1);
          return;
        }
        uVar6 = uVar4 + 0x281;
        unaff_r4 = uVar4 + 0x282 & 7;
        uVar4 = unaff_r5;
        iVar7 = unaff_r11;
      } while (unaff_r4 == 0);
      uVar8 = uVar6 * 0x100 & 0x100 | unaff_r4;
      if (7 < uVar8) break;
      switch(uVar8) {
      case 2:
        iVar2 = *(int *)(unaff_r8 + 0x18);
        iVar9 = iVar2 + (uVar6 >> 1);
        *(byte *)(iVar2 + (uVar6 >> 1)) =
             *(byte *)(iVar2 + (uVar6 >> 1)) & 0xf | *(byte *)(unaff_r7 + 1) & 0xf0;
        *(byte *)(iVar9 + -1) = *(byte *)(iVar9 + -1) & 0xf0 | *(byte *)(unaff_r7 + 5) >> 4;
        break;
      case 3:
        iVar2 = *(int *)(unaff_r8 + 0x18);
        *(byte *)(iVar2 + (uVar6 >> 1)) =
             *(byte *)(iVar2 + (uVar6 >> 1)) & 0xf | *(byte *)(unaff_r7 + 1) & 0xf0;
        *(byte *)(iVar2 + (uVar6 >> 1) + -1) =
             *(byte *)(unaff_r7 + 9) & 0xf0 | *(byte *)(unaff_r7 + 5) >> 4;
        break;
      case 4:
        iVar2 = *(int *)(unaff_r8 + 0x18);
        iVar9 = iVar2 + (uVar6 >> 1);
        *(byte *)(iVar2 + (uVar6 >> 1)) =
             *(byte *)(iVar2 + (uVar6 >> 1)) & 0xf | *(byte *)(unaff_r7 + 1) & 0xf0;
        *(byte *)(iVar9 + -1) = *(byte *)(unaff_r7 + 9) & 0xf0 | *(byte *)(unaff_r7 + 5) >> 4;
        *(byte *)(iVar9 + -2) = *(byte *)(iVar9 + -2) & 0xf0 | *(byte *)(unaff_r7 + 0xd) >> 4;
        break;
      case 5:
        iVar2 = *(int *)(unaff_r8 + 0x18);
        iVar9 = iVar2 + (uVar6 >> 1);
        *(byte *)(iVar2 + (uVar6 >> 1)) =
             *(byte *)(iVar2 + (uVar6 >> 1)) & 0xf | *(byte *)(unaff_r7 + 1) & 0xf0;
        *(byte *)(iVar9 + -1) = *(byte *)(unaff_r7 + 9) & 0xf0 | *(byte *)(unaff_r7 + 5) >> 4;
        *(byte *)(iVar9 + -2) = *(byte *)(unaff_r7 + 0x11) & 0xf0 | *(byte *)(unaff_r7 + 0xd) >> 4;
        break;
      case 6:
        iVar2 = *(int *)(unaff_r8 + 0x18);
        iVar9 = iVar2 + (uVar6 >> 1);
        *(byte *)(iVar2 + (uVar6 >> 1)) =
             *(byte *)(iVar2 + (uVar6 >> 1)) & 0xf | *(byte *)(unaff_r7 + 1) & 0xf0;
        *(byte *)(iVar9 + -1) = *(byte *)(unaff_r7 + 9) & 0xf0 | *(byte *)(unaff_r7 + 5) >> 4;
        *(byte *)(iVar9 + -2) = *(byte *)(unaff_r7 + 0x11) & 0xf0 | *(byte *)(unaff_r7 + 0xd) >> 4;
        *(byte *)(iVar9 + -3) = *(byte *)(iVar9 + -3) & 0xf0 | *(byte *)(unaff_r7 + 0x15) >> 4;
        break;
      case 7:
        iVar2 = *(int *)(unaff_r8 + 0x18);
        iVar9 = iVar2 + (uVar6 >> 1);
        *(byte *)(iVar2 + (uVar6 >> 1)) =
             *(byte *)(iVar2 + (uVar6 >> 1)) & 0xf | *(byte *)(unaff_r7 + 1) & 0xf0;
        *(byte *)(iVar9 + -1) = *(byte *)(unaff_r7 + 9) & 0xf0 | *(byte *)(unaff_r7 + 5) >> 4;
        *(byte *)(iVar9 + -2) = *(byte *)(unaff_r7 + 0x11) & 0xf0 | *(byte *)(unaff_r7 + 0xd) >> 4;
        *(byte *)(iVar9 + -3) = *(byte *)(unaff_r7 + 0x19) & 0xf0 | *(byte *)(unaff_r7 + 0x15) >> 4;
        break;
      default:
        *(byte *)(*(int *)(unaff_r8 + 0x18) + (uVar6 >> 1)) =
             *(byte *)(*(int *)(unaff_r8 + 0x18) + (uVar6 >> 1)) & 0xf |
             *(byte *)(unaff_r7 + 1) & 0xf0;
      }
    }
    switch(uVar8) {
    case 0x101:
      *(byte *)(*(int *)(unaff_r8 + 0x18) + (unaff_r5 >> 1)) =
           *(byte *)(*(int *)(unaff_r8 + 0x18) + (unaff_r5 >> 1)) & 0xf0 |
           *(byte *)(unaff_r7 + 1) >> 4;
      goto LAB_2c005ee0;
    case 0x102:
      *(byte *)(*(int *)(unaff_r8 + 0x18) + (unaff_r5 >> 1)) =
           *(byte *)(unaff_r7 + 5) & 0xf0 | *(byte *)(unaff_r7 + 1) >> 4;
      goto LAB_2c005ee0;
    case 0x103:
      param_1 = unaff_r5 >> 1;
      param_2 = *(int *)(unaff_r8 + 0x18);
      param_4 = *(byte *)(unaff_r7 + 5) & 0xf0 | *(byte *)(unaff_r7 + 1) >> 4;
      param_3 = param_2 + (unaff_r5 >> 1);
      break;
    case 0x104:
      iVar2 = *(int *)(unaff_r8 + 0x18);
      *(byte *)(iVar2 + (unaff_r5 >> 1)) =
           *(byte *)(unaff_r7 + 5) & 0xf0 | *(byte *)(unaff_r7 + 1) >> 4;
      *(byte *)(iVar2 + (unaff_r5 >> 1) + -1) =
           *(byte *)(unaff_r7 + 0xd) & 0xf0 | *(byte *)(unaff_r7 + 9) >> 4;
      goto LAB_2c005ee0;
    case 0x105:
      iVar2 = *(int *)(unaff_r8 + 0x18);
      *(byte *)(iVar2 + (unaff_r5 >> 1)) =
           *(byte *)(unaff_r7 + 5) & 0xf0 | *(byte *)(unaff_r7 + 1) >> 4;
      iVar2 = iVar2 + (unaff_r5 >> 1);
      *(byte *)(iVar2 + -1) = *(byte *)(unaff_r7 + 0xd) & 0xf0 | *(byte *)(unaff_r7 + 9) >> 4;
      *(byte *)(iVar2 + -2) = *(byte *)(iVar2 + -2) & 0xf0 | *(byte *)(unaff_r7 + 0x11) >> 4;
      goto LAB_2c005ee0;
    case 0x106:
      iVar2 = *(int *)(unaff_r8 + 0x18);
      *(byte *)(iVar2 + (unaff_r5 >> 1)) =
           *(byte *)(unaff_r7 + 5) & 0xf0 | *(byte *)(unaff_r7 + 1) >> 4;
      iVar2 = iVar2 + (unaff_r5 >> 1);
      *(byte *)(iVar2 + -1) = *(byte *)(unaff_r7 + 0xd) & 0xf0 | *(byte *)(unaff_r7 + 9) >> 4;
      *(byte *)(iVar2 + -2) = *(byte *)(unaff_r7 + 0x15) & 0xf0 | *(byte *)(unaff_r7 + 0x11) >> 4;
      goto LAB_2c005ee0;
    case 0x107:
      iVar2 = *(int *)(unaff_r8 + 0x18);
      *(byte *)(iVar2 + (unaff_r5 >> 1)) =
           *(byte *)(unaff_r7 + 5) & 0xf0 | *(byte *)(unaff_r7 + 1) >> 4;
      iVar2 = iVar2 + (unaff_r5 >> 1);
      *(byte *)(iVar2 + -1) = *(byte *)(unaff_r7 + 0xd) & 0xf0 | *(byte *)(unaff_r7 + 9) >> 4;
      *(byte *)(iVar2 + -2) = *(byte *)(unaff_r7 + 0x15) & 0xf0 | *(byte *)(unaff_r7 + 0x11) >> 4;
      *(byte *)(iVar2 + -3) = *(byte *)(iVar2 + -3) & 0xf0 | *(byte *)(unaff_r7 + 0x19) >> 4;
      goto LAB_2c005ee0;
    default:
      FUN_2c013c4c(3,DAT_2c0061ac,0xc3,DAT_2c0061b0);
      goto LAB_2c005ee0;
    }
  } while( true );
}


/* FUN_2c00669c @ 0x2c00669c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c00669c(uint *param_1,int param_2,byte param_3,byte param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint unaff_r5;
  byte *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  uint *puVar7;
  int unaff_r11;
  int iVar8;
  uint unaff_lr;
  int in_stack_00000014;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  
  do {
    *(byte *)(param_2 + unaff_lr) = param_4 | param_3;
    uVar6 = unaff_r5;
    iVar1 = unaff_r11;
LAB_2c005ff4:
    while( true ) {
      while( true ) {
        unaff_r11 = iVar1 + 1;
        unaff_r5 = uVar6 + 0x280;
        unaff_r6 = unaff_r6 + in_stack_00000020;
        unaff_r7 = unaff_r7 + in_stack_00000020;
        if (in_stack_0000001c == iVar1) {
                    /* WARNING: Could not recover jumptable at 0x2c013d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*_DAT_2c013d18)(param_1);
          return;
        }
        uVar2 = uVar6 + 0x281;
        uVar6 = uVar6 + 0x282 & 7;
        if (uVar6 != 0) {
          uVar4 = uVar2 * 0x100 & 0x100 | uVar6;
          if (uVar4 < 8) {
            switch(uVar4) {
            case 2:
              iVar1 = *(int *)(unaff_r8 + 0x18);
              iVar3 = iVar1 + (uVar2 >> 1);
              *(byte *)(iVar1 + (uVar2 >> 1)) =
                   *(byte *)(iVar1 + (uVar2 >> 1)) & 0xf | *(byte *)(unaff_r7 + 1) & 0xf0;
              *(byte *)(iVar3 + -1) = *(byte *)(iVar3 + -1) & 0xf0 | *(byte *)(unaff_r7 + 5) >> 4;
              break;
            case 3:
              iVar1 = *(int *)(unaff_r8 + 0x18);
              *(byte *)(iVar1 + (uVar2 >> 1)) =
                   *(byte *)(iVar1 + (uVar2 >> 1)) & 0xf | *(byte *)(unaff_r7 + 1) & 0xf0;
              *(byte *)(iVar1 + (uVar2 >> 1) + -1) =
                   *(byte *)(unaff_r7 + 9) & 0xf0 | *(byte *)(unaff_r7 + 5) >> 4;
              break;
            case 4:
              iVar1 = *(int *)(unaff_r8 + 0x18);
              iVar3 = iVar1 + (uVar2 >> 1);
              *(byte *)(iVar1 + (uVar2 >> 1)) =
                   *(byte *)(iVar1 + (uVar2 >> 1)) & 0xf | *(byte *)(unaff_r7 + 1) & 0xf0;
              *(byte *)(iVar3 + -1) = *(byte *)(unaff_r7 + 9) & 0xf0 | *(byte *)(unaff_r7 + 5) >> 4;
              *(byte *)(iVar3 + -2) = *(byte *)(iVar3 + -2) & 0xf0 | *(byte *)(unaff_r7 + 0xd) >> 4;
              break;
            case 5:
              iVar1 = *(int *)(unaff_r8 + 0x18);
              iVar3 = iVar1 + (uVar2 >> 1);
              *(byte *)(iVar1 + (uVar2 >> 1)) =
                   *(byte *)(iVar1 + (uVar2 >> 1)) & 0xf | *(byte *)(unaff_r7 + 1) & 0xf0;
              *(byte *)(iVar3 + -1) = *(byte *)(unaff_r7 + 9) & 0xf0 | *(byte *)(unaff_r7 + 5) >> 4;
              *(byte *)(iVar3 + -2) =
                   *(byte *)(unaff_r7 + 0x11) & 0xf0 | *(byte *)(unaff_r7 + 0xd) >> 4;
              break;
            case 6:
              iVar1 = *(int *)(unaff_r8 + 0x18);
              iVar3 = iVar1 + (uVar2 >> 1);
              *(byte *)(iVar1 + (uVar2 >> 1)) =
                   *(byte *)(iVar1 + (uVar2 >> 1)) & 0xf | *(byte *)(unaff_r7 + 1) & 0xf0;
              *(byte *)(iVar3 + -1) = *(byte *)(unaff_r7 + 9) & 0xf0 | *(byte *)(unaff_r7 + 5) >> 4;
              *(byte *)(iVar3 + -2) =
                   *(byte *)(unaff_r7 + 0x11) & 0xf0 | *(byte *)(unaff_r7 + 0xd) >> 4;
              *(byte *)(iVar3 + -3) = *(byte *)(iVar3 + -3) & 0xf0 | *(byte *)(unaff_r7 + 0x15) >> 4
              ;
              break;
            case 7:
              iVar1 = *(int *)(unaff_r8 + 0x18);
              iVar3 = iVar1 + (uVar2 >> 1);
              *(byte *)(iVar1 + (uVar2 >> 1)) =
                   *(byte *)(iVar1 + (uVar2 >> 1)) & 0xf | *(byte *)(unaff_r7 + 1) & 0xf0;
              *(byte *)(iVar3 + -1) = *(byte *)(unaff_r7 + 9) & 0xf0 | *(byte *)(unaff_r7 + 5) >> 4;
              *(byte *)(iVar3 + -2) =
                   *(byte *)(unaff_r7 + 0x11) & 0xf0 | *(byte *)(unaff_r7 + 0xd) >> 4;
              *(byte *)(iVar3 + -3) =
                   *(byte *)(unaff_r7 + 0x19) & 0xf0 | *(byte *)(unaff_r7 + 0x15) >> 4;
              break;
            default:
              *(byte *)(*(int *)(unaff_r8 + 0x18) + (uVar2 >> 1)) =
                   *(byte *)(*(int *)(unaff_r8 + 0x18) + (uVar2 >> 1)) & 0xf |
                   *(byte *)(unaff_r7 + 1) & 0xf0;
            }
          }
          else {
            switch(uVar4) {
            case 0x101:
              *(byte *)(*(int *)(unaff_r8 + 0x18) + (unaff_r5 >> 1)) =
                   *(byte *)(*(int *)(unaff_r8 + 0x18) + (unaff_r5 >> 1)) & 0xf0 |
                   *(byte *)(unaff_r7 + 1) >> 4;
              break;
            case 0x102:
              *(byte *)(*(int *)(unaff_r8 + 0x18) + (unaff_r5 >> 1)) =
                   *(byte *)(unaff_r7 + 5) & 0xf0 | *(byte *)(unaff_r7 + 1) >> 4;
              break;
            case 0x103:
              iVar1 = *(int *)(unaff_r8 + 0x18) + (unaff_r5 >> 1);
              *(byte *)(*(int *)(unaff_r8 + 0x18) + (unaff_r5 >> 1)) =
                   *(byte *)(unaff_r7 + 5) & 0xf0 | *(byte *)(unaff_r7 + 1) >> 4;
              *(byte *)(iVar1 + -1) = *(byte *)(iVar1 + -1) & 0xf0 | *(byte *)(unaff_r7 + 9) >> 4;
              break;
            case 0x104:
              iVar1 = *(int *)(unaff_r8 + 0x18);
              *(byte *)(iVar1 + (unaff_r5 >> 1)) =
                   *(byte *)(unaff_r7 + 5) & 0xf0 | *(byte *)(unaff_r7 + 1) >> 4;
              *(byte *)(iVar1 + (unaff_r5 >> 1) + -1) =
                   *(byte *)(unaff_r7 + 0xd) & 0xf0 | *(byte *)(unaff_r7 + 9) >> 4;
              break;
            case 0x105:
              iVar1 = *(int *)(unaff_r8 + 0x18);
              *(byte *)(iVar1 + (unaff_r5 >> 1)) =
                   *(byte *)(unaff_r7 + 5) & 0xf0 | *(byte *)(unaff_r7 + 1) >> 4;
              iVar1 = iVar1 + (unaff_r5 >> 1);
              *(byte *)(iVar1 + -1) =
                   *(byte *)(unaff_r7 + 0xd) & 0xf0 | *(byte *)(unaff_r7 + 9) >> 4;
              *(byte *)(iVar1 + -2) = *(byte *)(iVar1 + -2) & 0xf0 | *(byte *)(unaff_r7 + 0x11) >> 4
              ;
              break;
            case 0x106:
              iVar1 = *(int *)(unaff_r8 + 0x18);
              *(byte *)(iVar1 + (unaff_r5 >> 1)) =
                   *(byte *)(unaff_r7 + 5) & 0xf0 | *(byte *)(unaff_r7 + 1) >> 4;
              iVar1 = iVar1 + (unaff_r5 >> 1);
              *(byte *)(iVar1 + -1) =
                   *(byte *)(unaff_r7 + 0xd) & 0xf0 | *(byte *)(unaff_r7 + 9) >> 4;
              *(byte *)(iVar1 + -2) =
                   *(byte *)(unaff_r7 + 0x15) & 0xf0 | *(byte *)(unaff_r7 + 0x11) >> 4;
              break;
            case 0x107:
              iVar1 = *(int *)(unaff_r8 + 0x18);
              *(byte *)(iVar1 + (unaff_r5 >> 1)) =
                   *(byte *)(unaff_r7 + 5) & 0xf0 | *(byte *)(unaff_r7 + 1) >> 4;
              iVar1 = iVar1 + (unaff_r5 >> 1);
              *(byte *)(iVar1 + -1) =
                   *(byte *)(unaff_r7 + 0xd) & 0xf0 | *(byte *)(unaff_r7 + 9) >> 4;
              *(byte *)(iVar1 + -2) =
                   *(byte *)(unaff_r7 + 0x15) & 0xf0 | *(byte *)(unaff_r7 + 0x11) >> 4;
              *(byte *)(iVar1 + -3) = *(byte *)(iVar1 + -3) & 0xf0 | *(byte *)(unaff_r7 + 0x19) >> 4
              ;
              break;
            default:
              FUN_2c013c4c(3,DAT_2c0061ac,0xc3,DAT_2c0061b0);
            }
          }
        }
        uVar2 = in_stack_00000014 - uVar6 >> 3;
        param_1 = (uint *)(*(int *)(unaff_r8 + 0x18) + (in_stack_00000024 + unaff_r5 >> 1) + 1);
        pbVar5 = unaff_r6;
        if (uVar2 != 0) {
          puVar7 = param_1 + -uVar2;
          do {
            param_1 = param_1 + -1;
            *param_1 = (*pbVar5 & 0xf0) << 0x14 | (pbVar5[4] & 0xf0) << 0x18 |
                       (pbVar5[8] & 0xf0) << 0xc | (pbVar5[0xc] & 0xf0) << 0x10 |
                       (pbVar5[0x10] & 0xf0) << 4 | (pbVar5[0x14] & 0xf0) << 8 |
                       pbVar5[0x1c] & 0xfffffff0 | (uint)(pbVar5[0x18] >> 4);
            pbVar5 = pbVar5 + 0x20;
          } while (puVar7 != param_1);
          pbVar5 = unaff_r6 + uVar2 * 0x20;
        }
        uVar4 = in_stack_00000014 - uVar6 & 0xfffffff8;
        uVar2 = in_stack_00000014 - (uVar4 | uVar6);
        uVar6 = unaff_r5;
        iVar1 = unaff_r11;
        if (0 < (int)uVar2) break;
        if (uVar2 != 0) {
          param_1 = (uint *)FUN_2c013c4c(3,DAT_2c0061ac,0x174,DAT_2c0061b0);
        }
      }
      uVar4 = (in_stack_00000024 + unaff_r5) - uVar4;
      uVar2 = uVar4 * 0x100 & 0x100 | uVar2;
      if (uVar2 < 8) break;
      switch(uVar2) {
      case 0x101:
        param_1 = (uint *)(uint)*pbVar5;
        uVar2 = uVar4 - 1 >> 1;
        *(byte *)(*(int *)(unaff_r8 + 0x18) + uVar2) =
             *(byte *)(*(int *)(unaff_r8 + 0x18) + uVar2) & 0xf0 | *pbVar5 >> 4;
        break;
      case 0x102:
        param_1 = (uint *)(uint)*pbVar5;
        *(byte *)(*(int *)(unaff_r8 + 0x18) + (uVar4 - 1 >> 1)) = pbVar5[4] & 0xf0 | *pbVar5 >> 4;
        break;
      case 0x103:
        param_1 = *(uint **)(unaff_r8 + 0x18);
        uVar2 = uVar4 - 1 >> 1;
        *(byte *)((int)param_1 + (uVar4 - 1 >> 1)) = pbVar5[4] & 0xf0 | *pbVar5 >> 4;
        *(byte *)((int)param_1 + (uVar2 - 1)) =
             *(byte *)((int)param_1 + (uVar2 - 1)) & 0xf0 | pbVar5[8] >> 4;
        break;
      case 0x104:
        iVar3 = *(int *)(unaff_r8 + 0x18);
        *(byte *)(iVar3 + (uVar4 - 1 >> 1)) = pbVar5[4] & 0xf0 | *pbVar5 >> 4;
        param_1 = (uint *)(uint)pbVar5[8];
        *(byte *)(iVar3 + (uVar4 - 1 >> 1) + -1) = pbVar5[0xc] & 0xf0 | pbVar5[8] >> 4;
        break;
      case 0x105:
        iVar3 = *(int *)(unaff_r8 + 0x18);
        *(byte *)(iVar3 + (uVar4 - 1 >> 1)) = pbVar5[4] & 0xf0 | *pbVar5 >> 4;
        iVar3 = iVar3 + (uVar4 - 1 >> 1);
        param_1 = (uint *)(uint)pbVar5[8];
        *(byte *)(iVar3 + -1) = pbVar5[0xc] & 0xf0 | pbVar5[8] >> 4;
        *(byte *)(iVar3 + -2) = *(byte *)(iVar3 + -2) & 0xf0 | pbVar5[0x10] >> 4;
        break;
      case 0x106:
        iVar3 = *(int *)(unaff_r8 + 0x18);
        *(byte *)(iVar3 + (uVar4 - 1 >> 1)) = pbVar5[4] & 0xf0 | *pbVar5 >> 4;
        iVar3 = iVar3 + (uVar4 - 1 >> 1);
        *(byte *)(iVar3 + -1) = pbVar5[0xc] & 0xf0 | pbVar5[8] >> 4;
        param_1 = (uint *)(uint)pbVar5[0x10];
        *(byte *)(iVar3 + -2) = pbVar5[0x14] & 0xf0 | pbVar5[0x10] >> 4;
        break;
      case 0x107:
        iVar3 = *(int *)(unaff_r8 + 0x18);
        *(byte *)(iVar3 + (uVar4 - 1 >> 1)) = pbVar5[4] & 0xf0 | *pbVar5 >> 4;
        iVar3 = iVar3 + (uVar4 - 1 >> 1);
        *(byte *)(iVar3 + -1) = pbVar5[0xc] & 0xf0 | pbVar5[8] >> 4;
        param_1 = (uint *)(uint)pbVar5[0x10];
        *(byte *)(iVar3 + -2) = pbVar5[0x14] & 0xf0 | pbVar5[0x10] >> 4;
        *(byte *)(iVar3 + -3) = *(byte *)(iVar3 + -3) & 0xf0 | pbVar5[0x18] >> 4;
        break;
      default:
        param_1 = (uint *)FUN_2c013c4c(3,_DAT_2c0066b0,0x171,_DAT_2c0066ac);
      }
    }
    switch(uVar2) {
    case 2:
      iVar3 = *(int *)(unaff_r8 + 0x18);
      param_1 = (uint *)(uVar4 >> 1);
      iVar8 = iVar3 + (uVar4 >> 1);
      *(byte *)(iVar3 + (int)param_1) = *(byte *)(iVar3 + (int)param_1) & 0xf | *pbVar5 & 0xf0;
      *(byte *)(iVar8 + -1) = *(byte *)(iVar8 + -1) & 0xf0 | pbVar5[4] >> 4;
      goto LAB_2c005ff4;
    case 3:
      iVar3 = *(int *)(unaff_r8 + 0x18);
      param_1 = (uint *)(uVar4 >> 1);
      *(byte *)(iVar3 + (int)param_1) = *(byte *)(iVar3 + (int)param_1) & 0xf | *pbVar5 & 0xf0;
      *(byte *)(iVar3 + (uVar4 >> 1) + -1) = pbVar5[8] & 0xf0 | pbVar5[4] >> 4;
      goto LAB_2c005ff4;
    case 4:
      iVar3 = *(int *)(unaff_r8 + 0x18);
      param_1 = (uint *)(uVar4 >> 1);
      iVar8 = iVar3 + (uVar4 >> 1);
      *(byte *)(iVar3 + (int)param_1) = *(byte *)(iVar3 + (int)param_1) & 0xf | *pbVar5 & 0xf0;
      *(byte *)(iVar8 + -1) = pbVar5[8] & 0xf0 | pbVar5[4] >> 4;
      *(byte *)(iVar8 + -2) = *(byte *)(iVar8 + -2) & 0xf0 | pbVar5[0xc] >> 4;
      goto LAB_2c005ff4;
    case 5:
      iVar3 = *(int *)(unaff_r8 + 0x18);
      param_1 = (uint *)(uVar4 >> 1);
      iVar8 = iVar3 + (uVar4 >> 1);
      *(byte *)(iVar3 + (int)param_1) = *(byte *)(iVar3 + (int)param_1) & 0xf | *pbVar5 & 0xf0;
      *(byte *)(iVar8 + -1) = pbVar5[8] & 0xf0 | pbVar5[4] >> 4;
      *(byte *)(iVar8 + -2) = pbVar5[0x10] & 0xf0 | pbVar5[0xc] >> 4;
      goto LAB_2c005ff4;
    case 6:
      iVar3 = *(int *)(unaff_r8 + 0x18);
      param_1 = (uint *)(uVar4 >> 1);
      iVar8 = iVar3 + (uVar4 >> 1);
      *(byte *)(iVar3 + (int)param_1) = *(byte *)(iVar3 + (int)param_1) & 0xf | *pbVar5 & 0xf0;
      *(byte *)(iVar8 + -1) = pbVar5[8] & 0xf0 | pbVar5[4] >> 4;
      *(byte *)(iVar8 + -2) = pbVar5[0x10] & 0xf0 | pbVar5[0xc] >> 4;
      *(byte *)(iVar8 + -3) = *(byte *)(iVar8 + -3) & 0xf0 | pbVar5[0x14] >> 4;
      goto LAB_2c005ff4;
    case 7:
      iVar3 = *(int *)(unaff_r8 + 0x18);
      param_1 = (uint *)(uVar4 >> 1);
      iVar8 = iVar3 + (uVar4 >> 1);
      *(byte *)(iVar3 + (int)param_1) = *(byte *)(iVar3 + (int)param_1) & 0xf | *pbVar5 & 0xf0;
      *(byte *)(iVar8 + -1) = pbVar5[8] & 0xf0 | pbVar5[4] >> 4;
      *(byte *)(iVar8 + -2) = pbVar5[0x10] & 0xf0 | pbVar5[0xc] >> 4;
      *(byte *)(iVar8 + -3) = pbVar5[0x18] & 0xf0 | pbVar5[0x14] >> 4;
      goto LAB_2c005ff4;
    default:
      unaff_lr = uVar4 >> 1;
      param_2 = *(int *)(unaff_r8 + 0x18);
      param_3 = *pbVar5 & 0xf0;
      param_4 = *(byte *)(param_2 + unaff_lr) & 0xf;
    }
  } while( true );
}


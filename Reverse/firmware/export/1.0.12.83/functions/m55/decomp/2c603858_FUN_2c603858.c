/* FUN_2c603858 @ 0x2c603858 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c603858(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uStack_20;
  int iStack_1c;
  
  iVar4 = *param_1;
  iStack_1c = *_LAB_2c6039fc;
  if ((*(ushort *)(iVar4 + 0x22) & 0x1f8) != 0) {
    puVar3 = *(undefined4 **)(iVar4 + 0xc);
    uVar2 = 0;
    do {
      if (((int)((uint)*(byte *)((int)puVar3 + 7) << 0x1e) < 0) &&
         ((puVar3[1] & 0xffffff) == param_1[2])) {
        switch((short)param_1[1]) {
        case 0x20:
        case 0x30:
        case 0x36:
        case 0x44:
        case 0x47:
        case 0x55:
          if (param_2 < 1) {
LAB_2c60390a:
            uVar5 = param_1[3];
          }
          else {
            if (0xfe < param_2) goto LAB_2c60393e;
            iVar1 = 0xff - param_2;
            uVar5 = (param_2 * (uint)*(byte *)(param_1 + 4) + iVar1 * (uint)*(byte *)(param_1 + 3))
                    * 0x8081 >> 0x17 & 0xff |
                    (((param_2 * (uint)*(byte *)((int)param_1 + 0x11) +
                      iVar1 * (uint)*(byte *)((int)param_1 + 0xd)) * 0x8081 & 0x7fffffff) >> 0x17)
                    << 8 | (((param_2 * (uint)*(byte *)((int)param_1 + 0x12) +
                             iVar1 * (uint)*(byte *)((int)param_1 + 0xe)) * 0x8081 & 0x7fffffff) >>
                           0x17) << 0x10 | 0xff000000;
          }
          break;
        default:
          if (param_2 == 0) goto LAB_2c60390a;
          if (param_2 == 0xff) goto LAB_2c60393e;
          uVar5 = param_1[3] + ((param_1[4] - param_1[3]) * param_2 >> 8);
          break;
        case 0x33:
        case 0x34:
        case 0x57:
        case 0x66:
        case 0x67:
          if (param_2 < 0xff) goto LAB_2c60390a;
LAB_2c60393e:
          uVar5 = param_1[4];
          break;
        case 0x61:
          uVar5 = param_1[3];
          if (uVar5 == 0) goto LAB_2c60393e;
          if ((param_1[4] != 0) && (0x7f < param_2)) {
            uVar5 = param_1[4];
          }
        }
        iVar1 = FUN_2c62b108(*puVar3,(short)param_1[1],&uStack_20);
        if ((iVar1 == 0) || (uStack_20 != uVar5)) {
          lv_obj_set_local_style_prop
                    (*(undefined4 *)(*(int *)(iVar4 + 0xc) + uVar2 * 8),(short)param_1[1],uVar5);
          if (*_LAB_2c603a00 != '\0') {
            FUN_2c603540(*param_1,param_1[2],(short)param_1[1]);
          }
        }
        else {
          lv_obj_set_local_style_prop
                    (*(undefined4 *)(*(int *)(iVar4 + 0xc) + uVar2 * 8),(short)param_1[1],uVar5);
        }
        break;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 2;
    } while (uVar2 != (*(ushort *)(iVar4 + 0x22) & 0x1ff) >> 3);
  }
  if (*_LAB_2c6039fc == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


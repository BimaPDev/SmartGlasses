/* FUN_2c4765f0 @ 0x2c4765f0 */

uint FUN_2c4765f0(int param_1,uint *param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  
  iVar11 = *(int *)(param_1 + 8);
  bVar2 = *(byte *)(iVar11 + 9);
  iVar6 = *DAT_2c476898;
  uVar5 = *(uint *)(param_1 + 0xc);
  puVar7 = *(uint **)(param_1 + 0x10);
  cVar1 = *(char *)(param_1 + 4);
  if (bVar2 < 0x11) {
    uVar3 = (&switchD_2c476618::switchdataD_2c47661c)[bVar2];
    switch(bVar2) {
    default:
      if (cVar1 == '\0') {
        uVar10 = (byte)*puVar7 & 0x7f;
        if (((1 < uVar5) && (uVar10 = uVar10 | (*(byte *)((int)puVar7 + 1) & 0x7f) << 7, uVar5 != 2)
            ) && ((uVar10 = uVar10 | (*(byte *)((int)puVar7 + 2) & 0x7f) << 0xe, uVar5 != 3 &&
                  (uVar10 = uVar10 | (*(byte *)((int)puVar7 + 3) & 0x7f) << 0x15, uVar5 != 4)))) {
          uVar10 = uVar10 | (uint)(byte)puVar7[1] << 0x1c;
        }
        uVar9 = 1;
        *param_2 = uVar10;
        goto LAB_2c476646;
      }
      break;
    case 1:
      if (cVar1 == '\0') {
        uVar10 = (byte)*puVar7 & 0x7f;
        if (((1 < uVar5) && (uVar10 = uVar10 | (*(byte *)((int)puVar7 + 1) & 0x7f) << 7, uVar5 != 2)
            ) && ((uVar10 = uVar10 | (*(byte *)((int)puVar7 + 2) & 0x7f) << 0xe, uVar5 != 3 &&
                  (uVar10 = uVar10 | (*(byte *)((int)puVar7 + 3) & 0x7f) << 0x15, uVar5 != 4)))) {
          uVar10 = uVar10 | (uint)(byte)puVar7[1] << 0x1c;
        }
        uVar9 = 1;
        *param_2 = (int)(uVar10 << 0x1f) >> 0x1f ^ uVar10 >> 1;
        goto LAB_2c476646;
      }
      break;
    case 2:
    case 7:
    case 10:
      if (cVar1 == '\x05') {
        uVar9 = 1;
        *param_2 = *puVar7;
        goto LAB_2c476646;
      }
      break;
    case 3:
    case 8:
      if (cVar1 == '\0') {
        uVar12 = FUN_2c474018(uVar5,puVar7);
        uVar9 = 1;
        *(undefined8 *)param_2 = uVar12;
        goto LAB_2c476646;
      }
      break;
    case 4:
      if (cVar1 == '\0') {
        uVar5 = FUN_2c474018(uVar5,puVar7);
        uVar10 = (int)(uVar5 << 0x1f) >> 0x1f;
        *param_2 = uVar10 ^ uVar5;
        uVar9 = 1;
        param_2[1] = uVar10 ^ (uVar5 | (uint)(&switchD_2c476618::switchdataD_2c47661c + uVar3) >> 1)
        ;
        goto LAB_2c476646;
      }
      break;
    case 5:
    case 9:
    case 0xb:
      if (cVar1 == '\x01') {
        uVar5 = puVar7[1];
        *param_2 = *puVar7;
        param_2[1] = uVar5;
        uVar9 = 1;
        goto LAB_2c476646;
      }
      break;
    case 0xc:
      uVar10 = 0;
      if (uVar5 != 0) {
        pbVar4 = (byte *)((int)puVar7 + -1);
        do {
          pbVar4 = pbVar4 + 1;
          uVar10 = *pbVar4 & 0x7f;
          if ((*pbVar4 & 0x7f) != 0) {
            uVar10 = 1;
            break;
          }
        } while (pbVar4 != (byte *)((int)puVar7 + (uVar5 - 1)));
      }
      uVar9 = 1;
      *param_2 = uVar10;
      goto LAB_2c476646;
    case 0xe:
      if (cVar1 == '\x02') {
        bVar2 = *(byte *)(param_1 + 5);
        if (((param_4 != 0) && (*param_2 != 0)) && (*param_2 != *(uint *)(iVar11 + 0x18))) {
          (*(code *)param_3[1])(param_3[2]);
        }
        iVar11 = uVar5 - bVar2;
        uVar5 = (*(code *)*param_3)(param_3[2],iVar11 + 1);
        *param_2 = uVar5;
        if (uVar5 != 0) {
          uVar9 = 1;
          FUN_2c674668(uVar5,(byte *)((int)puVar7 + (uint)bVar2),iVar11);
          *(undefined1 *)(*param_2 + iVar11) = 0;
          goto LAB_2c476646;
        }
      }
      break;
    case 0xf:
      if (cVar1 == '\x02') {
        uVar9 = (uint)*(byte *)(param_1 + 5);
        if (((param_4 != 0) && (param_2[1] != 0)) &&
           ((*(int *)(iVar11 + 0x18) == 0 || (param_2[1] != *(uint *)(*(int *)(iVar11 + 0x18) + 4)))
           )) {
          (*(code *)param_3[1])(param_3[2]);
        }
        if (uVar9 < uVar5) {
          uVar5 = uVar5 - uVar9;
          uVar10 = (*(code *)*param_3)(param_3[2],uVar5);
          param_2[1] = uVar10;
          if (uVar10 == 0) break;
          FUN_2c674668(uVar10,(byte *)((int)puVar7 + uVar9),uVar5);
        }
        else {
          uVar5 = uVar5 - uVar9;
          param_2[1] = 0;
        }
        uVar9 = 1;
        *param_2 = uVar5;
        goto LAB_2c476646;
      }
      break;
    case 0x10:
      if (cVar1 == '\x02') {
        uVar9 = (uint)*(byte *)(param_1 + 5);
        uVar10 = *(uint *)(iVar11 + 0x18);
        if (uVar5 < uVar9) {
          if (((param_4 == 0) || (uVar8 = *param_2, uVar8 == 0)) || (uVar10 == uVar8)) {
            uVar9 = 0;
            *param_2 = 0;
            goto LAB_2c476646;
          }
          uVar5 = 0;
          uVar9 = 0;
LAB_2c476782:
          FUN_2c47573c(uVar8,param_3);
        }
        else {
          uVar5 = FUN_2c4758f8(*(undefined4 *)(iVar11 + 0x14),param_3,uVar5 - uVar9,
                               (byte *)((int)puVar7 + uVar9));
          uVar9 = uVar5;
          if (((param_4 != 0) && (uVar8 = *param_2, uVar8 != uVar10)) && (uVar8 != 0)) {
            if (uVar5 != 0) {
              iVar11 = FUN_2c4740bc(uVar8,uVar5,param_3);
              uVar8 = *param_2;
              uVar9 = (uint)(iVar11 != 0);
            }
            goto LAB_2c476782;
          }
          if (uVar5 != 0) {
            uVar9 = 1;
          }
        }
        *param_2 = uVar5;
        goto LAB_2c476646;
      }
    }
  }
  uVar9 = 0;
LAB_2c476646:
  if (*DAT_2c476898 == iVar6) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


/* FUN_14064e94 @ 0x14064e94 */

undefined4 *
FUN_14064e94(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4,byte param_5,
            undefined2 *param_6,int param_7,int *param_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  short sVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  
  local_34 = *DAT_140650cc;
  uVar6 = (uint)param_5;
  puVar1 = (undefined4 *)FUN_14066108(param_2);
  if (((puVar1 == (undefined4 *)0x0) || (*(int *)*puVar1 == 0)) ||
     ((param_7 == 0 && (((int *)*puVar1)[1] == 0)))) {
LAB_14065088:
    puVar3 = (undefined4 *)0x42;
    goto LAB_14064efe;
  }
  if ((1 < param_1) || (*(int *)(DAT_140650d0 + (param_1 + 0x22) * 4) == 0)) {
    puVar3 = (undefined4 *)0x43;
    goto LAB_14064efe;
  }
  if ((param_7 != 0) && (*(ushort *)(param_7 + 6) < 7)) {
    puVar3 = (undefined4 *)0x4e;
    goto LAB_14064efe;
  }
  if (((uVar6 == 0) || (param_6 == (undefined2 *)0x0)) || (1 < param_4)) {
LAB_1406508c:
    puVar3 = (undefined4 *)&IRQ;
  }
  else {
    if (param_4 == 1) {
      if (uVar6 != 1) goto LAB_1406508c;
      puVar1 = (undefined4 *)FUN_1405be00(param_1,0x1d,*param_6);
      if (puVar1 != (undefined4 *)0x0) goto LAB_140650a8;
    }
    else {
      puVar1 = (undefined4 *)FUN_1405be00(param_1,0x1b,*param_6);
      if (puVar1 != (undefined4 *)0x0) {
LAB_140650a8:
        puVar3 = (undefined4 *)0x12;
        goto LAB_14064efe;
      }
      if (uVar6 != 1) {
        iVar2 = FUN_1405bef8(param_1);
        puVar1 = (undefined4 *)0x0;
        if (iVar2 == 0) goto LAB_14065088;
      }
    }
    if (param_4 == 0) {
      uVar5 = 4;
    }
    else {
      uVar5 = 5;
    }
    sVar4 = 1;
    puVar7 = param_6;
    do {
      puVar1 = (undefined4 *)FUN_140664f0(*puVar7,&local_3c,&local_38);
      puVar3 = puVar1;
      if (puVar1 != (undefined4 *)0x0) goto LAB_14064efe;
      puVar1 = (undefined4 *)FUN_140666e0(param_1,uVar5,local_3c,local_38);
      puVar3 = puVar1;
      if (uVar6 == 1) {
        if (puVar1 != (undefined4 *)0x0) goto LAB_14064efe;
        sVar4 = sVar4 + puVar7[1] + 2;
        break;
      }
      sVar4 = puVar7[1] + 4 + sVar4;
      if (puVar1 != (undefined4 *)0x0) goto LAB_14064efe;
      puVar7 = puVar7 + 2;
    } while (puVar7 != param_6 + (uVar6 - 1 & 0xff) * 2 + 2);
    if (param_4 == 0) {
      uVar5 = 3;
    }
    else {
      uVar5 = 10;
    }
    puVar3 = (undefined4 *)
             FUN_1406cc4c(param_1,param_2,param_3,uVar5,sVar4,(uVar6 + 0xf) * 4,DAT_140650d4,
                          &local_38);
    puVar1 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      FUN_1406d4d4(local_38);
      iVar2 = local_38;
      FUN_140e5278(local_38 + 0x36,param_6,uVar6 << 2);
      *(byte *)(iVar2 + 0x33) = param_5;
      *(undefined2 *)(iVar2 + 0x2e) = 0;
      *(undefined4 *)(iVar2 + 0x28) = 0;
      *(undefined1 *)(iVar2 + 0x34) = 2;
      FUN_140739b4(iVar2 + 0x20);
      if (param_7 == 0) {
        *(undefined1 *)(local_38 + 0x32) = 0;
      }
      else {
        *(undefined1 *)(local_38 + 0x32) = 1;
        *(undefined2 *)(local_38 + 0x2e) = param_6[1];
        FUN_140739f0(local_38 + 0x20,param_7);
        FUN_1407358c(param_7);
      }
      puVar1 = (undefined4 *)FUN_1406cdd0(param_1,local_38);
      *param_8 = local_38;
    }
  }
LAB_14064efe:
  if ((*DAT_140650cc ^ local_34) == 0) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(puVar1,*DAT_140650cc ^ local_34,0);
}


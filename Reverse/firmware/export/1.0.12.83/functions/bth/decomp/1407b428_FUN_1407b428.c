/* FUN_1407b428 @ 0x1407b428 */

void FUN_1407b428(int param_1,int param_2,undefined4 *param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  undefined4 extraout_r1_00;
  undefined1 uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 local_34;
  undefined2 local_30;
  uint local_2c;
  
  iVar6 = DAT_1407b55c;
  local_2c = *DAT_1407b554;
  uVar4 = 0;
  if (param_2 != 0) {
    uVar1 = 10;
    iVar8 = *(int *)(param_1 + 0x6c);
    iVar9 = *(int *)(param_2 + 8);
    *param_4 = 10;
    cVar7 = *(char *)(iVar6 + 0x11);
    if (cVar7 == '\0') {
      uVar3 = 0xc;
    }
    else if (*(short *)(param_2 + 4) == 2) {
      uVar1 = 0xe;
      uVar3 = 0x10;
      *param_4 = 0xe;
    }
    else {
      uVar3 = 0xc;
      cVar7 = '\0';
    }
    if ((*(char *)(param_2 + 3) != '\0') && (*(char *)(iVar8 + 0x10) != '\0')) {
      *param_4 = uVar3;
      uVar1 = uVar3;
    }
    uVar10 = FUN_140759b8(uVar1);
    uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
    puVar2 = (undefined2 *)uVar10;
    if (puVar2 != (undefined2 *)0x0) {
      *param_3 = puVar2;
      *puVar2 = 1;
      FUN_1407b214(param_1,&local_34,iVar9 + 2);
      if ((local_34._2_1_ & 0xf) == 8) {
        uVar5 = 1;
      }
      else {
        uVar5 = 2;
      }
      *(undefined1 *)(param_1 + 0x1e) = uVar5;
      uVar4 = extraout_r1;
      switch(local_34._2_1_ >> 4) {
      case 1:
        *(undefined4 *)(param_1 + 0x14) = 48000;
        break;
      case 2:
        *(undefined4 *)(param_1 + 0x14) = 0xac44;
        break;
      default:
        goto switchD_1407b4a8_caseD_3;
      case 4:
        *(undefined4 *)(param_1 + 0x14) = 32000;
        break;
      case 8:
        *(undefined4 *)(param_1 + 0x14) = 16000;
      }
      puVar2[1] = 0x607;
      *(undefined4 *)(puVar2 + 2) = local_34;
      puVar2[4] = local_30;
      **(undefined1 **)(param_1 + 0x74) = 0;
      FUN_140e5278(*(int *)(param_1 + 0x74) + 1,(int)puVar2 + 5,*(byte *)((int)puVar2 + 3) + 1);
      if ((*(char *)(iVar6 + 0x11) == '\0') || (cVar7 == '\0')) {
        iVar6 = 10;
      }
      else {
        iVar6 = 0xe;
        *(undefined4 *)(puVar2 + 5) = DAT_1407b558;
      }
      uVar5 = 0;
      uVar4 = extraout_r1_00;
      if ((*(char *)(param_2 + 3) != '\0') && (uVar5 = 0, *(char *)(iVar8 + 0x10) != '\0')) {
        uVar5 = 0;
        *(undefined2 *)((int)puVar2 + iVar6) = 8;
      }
      goto LAB_1407b4b6;
    }
  }
switchD_1407b4a8_caseD_3:
  uVar5 = 1;
LAB_1407b4b6:
  if ((*DAT_1407b554 ^ local_2c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc(uVar5,uVar4,*DAT_1407b554 ^ local_2c,0);
  }
  return;
}


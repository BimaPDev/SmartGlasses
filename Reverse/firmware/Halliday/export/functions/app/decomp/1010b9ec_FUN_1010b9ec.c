/* FUN_1010b9ec @ 0x1010b9ec */

uint FUN_1010b9ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r2;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_1013b044(*(undefined2 *)(param_1 + 0xe),param_1,*(undefined2 *)(param_1 + 0xe),param_4
                       ,param_4);
  iVar3 = (int)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 != 0) {
    if (extraout_r2 < 0x427) {
      if ((extraout_r2 < 0x409) || ((DAT_1010bbd8 & 1 << (extraout_r2 - 0x409 & 0xff)) == 0)) {
        return 7;
      }
    }
    else if (3 < extraout_r2 - 0x800) {
      return 7;
    }
  }
  if ((extraout_r2 == 0x401) || (extraout_r2 - 0x41f < 2)) {
    uVar2 = *(uint *)(iVar3 + 0x18) & 0xf;
    uVar1 = DAT_1010bbdc;
  }
  else {
    uVar2 = *(uint *)(iVar3 + 0x18) & 7;
    uVar1 = DAT_1010bbe0;
  }
  if (uVar2 != 0) {
    FUN_101188d0(uVar1);
    return 1;
  }
  if (*(char *)(iVar3 + 0xc) != '\x01') {
    if (*(char *)(iVar3 + 0xc) != '\0') {
switchD_1010baf4_caseD_409:
      return 0;
    }
    uVar2 = *(uint *)(iVar3 + 8);
    switch(extraout_r2) {
    case 0x400:
    case 0x401:
    case 0x402:
    case 0x403:
    case 0x40d:
    case 0x41f:
    case 0x420:
    case 0x424:
    case 0x425:
      uVar2 = uVar2 & 3;
      bVar4 = uVar2 == 0;
      break;
    case 0x404:
    case 0x405:
    case 0x406:
    case 0x407:
    case 0x408:
    case 0x410:
    case 0x411:
    case 0x412:
    case 0x413:
    case 0x414:
    case 0x41d:
    case 0x41e:
    case 0x421:
    case 0x422:
    case 0x423:
    case 0x42d:
    case 0x42e:
    case 0x42f:
    case 0x430:
      return uVar2 & 1;
    default:
      return 0;
    case 0x427:
    case 0x428:
    case 0x429:
    case 0x42a:
    case 0x42b:
    case 0x42c:
      return (uint)(0x55555555 < uVar2 * DAT_1010bbe4);
    }
    goto LAB_1010bac0;
  }
  uVar2 = *(uint *)(iVar3 + 8);
  if (extraout_r2 < 0x431) {
    switch(extraout_r2) {
    case 0x400:
    case 0x401:
    case 0x402:
    case 0x403:
    case 0x41f:
    case 0x420:
    case 0x424:
    case 0x425:
      uVar2 = uVar2 & 0xf;
      bVar4 = uVar2 == 0;
      break;
    case 0x404:
    case 0x405:
    case 0x406:
    case 0x407:
    case 0x408:
    case 0x40d:
    case 0x410:
    case 0x411:
    case 0x41d:
    case 0x41e:
    case 0x421:
    case 0x422:
    case 0x423:
    case 0x42d:
    case 0x42e:
    case 0x42f:
    case 0x430:
      uVar2 = uVar2 & 7;
      bVar4 = uVar2 == 0;
      break;
    case 0x409:
      goto switchD_1010ba6c_caseD_409;
    case 0x40a:
    case 0x40b:
    case 0x412:
    case 0x419:
    case 0x41a:
    case 0x41b:
    case 0x41c:
    case 0x426:
switchD_1010ba6c_caseD_40a:
      uVar2 = uVar2 & 3;
      bVar4 = uVar2 == 0;
      break;
    default:
      goto switchD_1010baf4_caseD_409;
    case 0x427:
    case 0x428:
    case 0x429:
    case 0x42a:
    case 0x42b:
    case 0x42c:
      return (uint)(uVar2 % 0xc != 0);
    }
LAB_1010bac0:
    if (!bVar4) {
      uVar2 = 1;
    }
  }
  else {
    if (extraout_r2 != 0x802) {
      if (extraout_r2 != 0x803) {
        return 0;
      }
      goto switchD_1010ba6c_caseD_40a;
    }
switchD_1010ba6c_caseD_409:
    uVar2 = uVar2 & 1;
  }
  return uVar2;
}


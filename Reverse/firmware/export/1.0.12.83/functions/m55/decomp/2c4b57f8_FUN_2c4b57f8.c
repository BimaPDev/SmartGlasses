/* FUN_2c4b57f8 @ 0x2c4b57f8 */

void FUN_2c4b57f8(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  cVar1 = *(char *)(DAT_2c4b5950 + param_1 * 2 + param_2);
  uVar4 = (uint)cVar1;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4b595c,DAT_2c4b5958,param_1,param_2);
  }
  if (param_1 == 1) {
    if (uVar4 != 2) {
      FUN_2c4b8c54();
      goto LAB_2c4b581c;
    }
    FUN_2c4b9280(0);
switchD_2c4b5824_caseD_2:
    if (((int)((uint)*DAT_2c4b5954 << 0x1e) < 0) || (DAT_2c4b5954[0xd] != 0)) {
      uVar3 = 2;
      pbVar5 = DAT_2c4b5954;
      goto LAB_2c4b5900;
    }
    bVar2 = DAT_2c4b5954[0x7d];
    uVar3 = 2;
joined_r0x2c4b592e:
    pbVar5 = DAT_2c4b5954;
    if (bVar2 != 0) goto LAB_2c4b5900;
LAB_2c4b5896:
    pbVar5 = DAT_2c4b5954;
    FUN_2c4b8394(0,param_2);
    if (param_2 != 0) goto LAB_2c4b5900;
LAB_2c4b58d8:
    FUN_2c4b6bc8(0);
LAB_2c4b58de:
    if ((uVar4 & 0xfffffffd) != 1) goto LAB_2c4b5900;
    if (uVar4 == 1) {
LAB_2c4b58b2:
      FUN_2c4b6b00(pbVar5[0x3d],*(undefined4 *)(pbVar5 + 0x38),0);
      goto LAB_2c4b5900;
    }
    if (cVar1 != '\x03') goto LAB_2c4b5900;
  }
  else {
    if (param_1 == 2) {
      if (uVar4 != 4) goto LAB_2c4b581c;
      FUN_2c4b9368(0);
switchD_2c4b5824_caseD_4:
      if (((int)((uint)*DAT_2c4b5954 << 0x1e) < 0) || (DAT_2c4b5954[0xd] != 0)) {
        uVar3 = 4;
        pbVar5 = DAT_2c4b5954;
        goto LAB_2c4b5900;
      }
      bVar2 = DAT_2c4b5954[0x45];
      uVar3 = 4;
      goto joined_r0x2c4b592e;
    }
    FUN_2c4b9118(0,cVar1);
LAB_2c4b581c:
    pbVar5 = DAT_2c4b5954;
    switch(uVar4) {
    case 0:
      if (((*DAT_2c4b5954 & 2) != 0) || (DAT_2c4b5954[0x45] != 0)) {
        uVar3 = 0;
        goto LAB_2c4b5900;
      }
      uVar3 = 0;
      if (DAT_2c4b5954[0x7d] != 0) goto LAB_2c4b5900;
      uVar3 = 0;
      goto LAB_2c4b5896;
    case 1:
      if (((-1 < (int)((uint)*DAT_2c4b5954 << 0x1e)) && (DAT_2c4b5954[0x61] == 0)) &&
         (FUN_2c4b8394(0,param_2), param_2 == 0)) {
        uVar3 = 1;
        goto LAB_2c4b58d8;
      }
      uVar3 = 1;
      goto LAB_2c4b58b2;
    case 2:
      goto switchD_2c4b5824_caseD_2;
    case 3:
      if (((-1 < (int)((uint)*DAT_2c4b5954 << 0x1e)) && (DAT_2c4b5954[0x29] == 0)) &&
         (FUN_2c4b8394(0,param_2), param_2 == 0)) {
        uVar3 = 3;
        goto LAB_2c4b58d8;
      }
      uVar3 = 3;
      break;
    case 4:
      goto switchD_2c4b5824_caseD_4;
    default:
      FUN_2c4b8394(0,param_2);
      uVar3 = uVar4;
      if (param_2 == 0) goto LAB_2c4b58d8;
      goto LAB_2c4b58de;
    }
  }
  FUN_2c4b6b58(pbVar5[0x75],*(undefined4 *)(pbVar5 + 0x70),0);
LAB_2c4b5900:
  pbVar5[uVar3 * 0x1c + 0xd] = 0;
  return;
}


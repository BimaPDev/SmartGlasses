/* FUN_2c47d068 @ 0x2c47d068 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47d068(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  
  puVar6 = (undefined1 *)FUN_2c47245c(3,0x32);
  if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c6741f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_2c6741f4)(0x711,_LAB_2c47d0d4,_LAB_2c47d0d0);
    return;
  }
  puVar6[0x12] = (char)param_1;
  *puVar6 = 1;
  puVar6[3] = 1;
  puVar6[10] = 1;
  puVar6[1] = 0x70;
  puVar6[0xb] = 4;
  puVar6[0xe] = 4;
  puVar6[2] = 0;
  puVar6[0xf] = (char)((uint)param_1 >> 0x18);
  puVar6[6] = 0;
  puVar6[0x10] = (char)((uint)param_1 >> 0x10);
  puVar6[0x11] = (char)((uint)param_1 >> 8);
  puVar6[9] = 0;
  puVar6[4] = 3;
  puVar6[0xd] = 0;
  puVar6[5] = 0x71;
  puVar6[7] = 0xb;
  puVar6[8] = 100;
  puVar6[0xc] = 0x65;
  puVar4 = (undefined4 *)FUN_2c47245c(3,0x10);
  puVar1 = _LAB_2c47cc54;
  if (puVar4 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar4 + 1) = 0x13;
    piVar3 = _LAB_2c47cc50;
    *puVar4 = puVar6;
    puVar4[2] = 0;
    FUN_2c644044(*puVar1,0xffffffff);
    iVar5 = *piVar3;
    if (iVar5 != 0) {
      FUN_2c4857c8(iVar5,puVar4);
    }
    FUN_2c644080(*puVar1);
    if ((*piVar3 != 0) && (iVar5 = FUN_2c485770(), puVar1 = DAT_2c47cbf0, iVar5 == 0)) {
      puVar4 = (undefined4 *)FUN_2c4857a8(*DAT_2c47cbf0);
      if (((*(char *)(puVar4 + 3) == '\0') && (iVar5 = FUN_2c47c54c(), iVar5 == 0)) ||
         (iVar5 = FUN_2c47c4c8(), iVar5 != 1)) {
        iVar5 = FUN_2c47a63c();
        if (iVar5 == 0) {
          FUN_2c47cb44(puVar4);
          return;
        }
      }
      else {
        iVar5 = FUN_2c47c4e0();
        puVar2 = DAT_2c47cbf4;
        if (iVar5 == 0) {
          FUN_2c47c284(*puVar4,*(undefined2 *)(puVar4 + 1),puVar4[2]);
          FUN_2c644044(*puVar2,0xffffffff);
          FUN_2c485820(*puVar1,puVar4);
          FUN_2c644080(*puVar2);
          return;
        }
      }
      return;
    }
  }
  return;
}


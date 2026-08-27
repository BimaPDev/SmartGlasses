/* FUN_2c5d7eec @ 0x2c5d7eec */

void FUN_2c5d7eec(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *local_48;
  undefined4 **local_44;
  undefined4 *local_40;
  undefined4 *local_3c [4];
  undefined4 local_2c;
  
  local_2c = *DAT_2c5d8064;
  if ((*(int *)(param_1 + 4) == 0) || (*(char *)(param_1 + 8) == -1)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5d8070,0x87,DAT_2c5d806c,DAT_2c5d8078);
  }
  if ((param_2 == (char *)0x0) || (cVar1 = *param_2, cVar1 == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d8070,0x96,DAT_2c5d806c,DAT_2c5d8074);
  }
  piVar7 = *(int **)(param_1 + 0x10);
  piVar2 = *(int **)(param_1 + 0xc);
  while (piVar7 != piVar2) {
    iVar3 = FUN_2c5d780c(*(undefined4 *)(*piVar2 + 4),*(undefined4 *)(*piVar2 + 8),param_2);
    piVar2 = piVar2 + 1;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5d8070,0x8d,DAT_2c5d806c,DAT_2c5d8068,param_2);
    }
  }
  local_44 = local_3c;
  puVar4 = (undefined4 *)FUN_2c66c4ec(param_2);
  local_48 = puVar4;
  if (puVar4 < (undefined4 *)0x10) {
    ppuVar5 = local_3c;
    if (puVar4 == (undefined4 *)0x1) {
      local_3c[0] = (undefined4 *)CONCAT31(local_3c[0]._1_3_,cVar1);
      goto LAB_2c5d7fb2;
    }
    if (puVar4 == (undefined4 *)0x0) goto LAB_2c5d7fb2;
  }
  else {
    local_44 = (undefined4 **)FUN_2c5d779c(&local_48,0);
    local_3c[0] = local_48;
    ppuVar5 = local_44;
  }
  FUN_2c674668(ppuVar5,param_2,puVar4);
  ppuVar5 = local_44;
LAB_2c5d7fb2:
  piVar2 = DAT_2c5d807c;
  *(undefined1 *)((int)ppuVar5 + (int)local_48) = 0;
  local_40 = local_48;
  if (*DAT_2c5d807c == 0) {
    FUN_2c4723c4();
    *piVar2 = 1;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,0x24);
  *puVar4 = DAT_2c5d8080;
  puVar4[2] = 0;
  *(undefined1 *)(puVar4 + 3) = 0;
  puVar4[1] = puVar4 + 3;
  FUN_2c52f5f4(puVar4 + 1,&local_44);
  puVar4[7] = param_3;
  puVar4[8] = param_4;
  local_48 = puVar4;
  if (local_44 == local_3c) {
    puVar6 = *(undefined4 **)(param_1 + 0x10);
    if (puVar6 == *(undefined4 **)(param_1 + 0x14)) {
      FUN_2c5d7e20(param_1 + 0xc,puVar6,&local_48);
    }
    else {
      *puVar6 = puVar4;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d8070,0x93,DAT_2c5d806c,DAT_2c5d8084,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}


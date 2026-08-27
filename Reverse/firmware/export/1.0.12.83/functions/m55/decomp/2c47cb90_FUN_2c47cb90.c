/* FUN_2c47cb90 @ 0x2c47cb90 */

void FUN_2c47cb90(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = DAT_2c47cbf0;
  puVar3 = (undefined4 *)FUN_2c4857a8(*DAT_2c47cbf0);
  if (((*(char *)(puVar3 + 3) == '\0') && (iVar4 = FUN_2c47c54c(), iVar4 == 0)) ||
     (iVar4 = FUN_2c47c4c8(), iVar4 != 1)) {
    iVar4 = FUN_2c47a63c();
    if (iVar4 == 0) {
      FUN_2c47cb44(puVar3);
      return;
    }
  }
  else {
    iVar4 = FUN_2c47c4e0();
    puVar2 = DAT_2c47cbf4;
    if (iVar4 == 0) {
      FUN_2c47c284(*puVar3,*(undefined2 *)(puVar3 + 1),puVar3[2]);
      FUN_2c644044(*puVar2,0xffffffff);
      FUN_2c485820(*puVar1,puVar3);
      FUN_2c644080(*puVar2);
      return;
    }
  }
  return;
}


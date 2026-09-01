/* FUN_1013921a @ 0x1013921a */

undefined4 FUN_1013921a(undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined2 *local_20;
  char local_1c;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar3 = 0xffffff97;
  }
  else {
    FUN_1013909a();
    FUN_100edfc4();
    if (*(char *)(param_1 + 0xc) == '\x02') {
      puVar4 = param_1 + 4;
      local_20 = puVar4;
      iVar2 = FUN_1011e768(puVar4);
      local_1c = (char)iVar2;
      if ((iVar2 == 0) && (*(code **)(param_1 + 0x2c) != (code *)0x0)) {
        (**(code **)(param_1 + 0x2c))(1,&local_20,*(undefined4 *)(param_1 + 0x30));
      }
      if (local_1c == '\0') {
        while( true ) {
          if (*(int *)(param_1 + 0x1e) < (int)(uint)*(byte *)(param_1 + 0xc)) break;
          FUN_1011dbde(param_1 + 0x20,0xffffffff);
        }
        iVar2 = *(int *)(param_1 + ((*(byte *)((int)param_1 + 0x19) == 0) + 4) * 2);
        uVar5 = *(undefined4 *)(param_1 + (*(byte *)((int)param_1 + 0x19) + 4) * 2);
        uVar3 = FUN_100674c4(iVar2,(int)(short)param_1[4],(int)(short)param_1[5]);
        uVar1 = *(undefined2 *)(iVar2 + 0xc);
        *(byte *)((int)param_1 + 0x1b) = *(byte *)((int)param_1 + 0x1b) | 1;
        FUN_100edd8c(uVar5,puVar4,uVar3,*(undefined4 *)(param_1 + 2),uVar1,0);
      }
    }
    param_1[5] = param_1[1];
    param_1[4] = *param_1;
    param_1[6] = 0;
    param_1[7] = 0;
    FUN_100ed96c(1);
    uVar3 = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return uVar3;
}


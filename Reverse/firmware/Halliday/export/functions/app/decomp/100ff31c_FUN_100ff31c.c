/* FUN_100ff31c @ 0x100ff31c */

int FUN_100ff31c(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int local_1c;
  
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  local_1c = (**(code **)(param_1 + 0x204))(param_1,DAT_100ff3e8,param_2,0);
  if (local_1c == 0) {
    local_1c = FUN_100faf14(param_2,4);
    if (local_1c == 0) {
      uVar1 = FUN_100faff0(param_2);
      *(undefined2 *)(param_1 + 0x228) = uVar1;
      uVar1 = FUN_100faff0(param_2);
      *(undefined2 *)(param_1 + 0x22a) = uVar1;
      FUN_100fafbc(param_2);
      if (1 < *(ushort *)(param_1 + 0x228)) {
        *(undefined2 *)(param_1 + 0x22a) = 0;
        return 8;
      }
      uVar6 = (uint)*(ushort *)(param_1 + 0x22a);
      uVar5 = FUN_100fb280(uVar5,4,0,uVar6,0,&local_1c);
      *(undefined4 *)(param_1 + 0x22c) = uVar5;
      if (local_1c == 0) {
        local_1c = FUN_100faf14(param_2,uVar6 * 4);
        if (local_1c == 0) {
          puVar2 = *(undefined2 **)(param_1 + 0x22c);
          puVar3 = puVar2;
          if (uVar6 != 0) {
            do {
              uVar1 = FUN_100faff0(param_2);
              *puVar3 = uVar1;
              uVar1 = FUN_100faff0(param_2);
              puVar4 = puVar3 + 2;
              puVar3[1] = uVar1;
              puVar3 = puVar4;
            } while (puVar4 != puVar2 + uVar6 * 2);
          }
          FUN_100fafbc(param_2);
        }
      }
    }
  }
  return local_1c;
}


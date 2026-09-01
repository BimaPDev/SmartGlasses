/* FUN_100cdf50 @ 0x100cdf50 */

void FUN_100cdf50(undefined4 param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  uint uVar6;
  ushort *puVar7;
  ushort uVar9;
  ushort *puVar10;
  undefined1 local_54 [2];
  undefined2 local_52;
  char *local_50;
  ushort local_4c;
  char local_48;
  undefined4 uStack_47;
  undefined1 *local_34 [3];
  char **local_28;
  ushort local_24;
  ushort *puVar8;
  
  if (param_2 != 0) {
    pcVar5 = *(code **)(param_5 + 4);
    goto LAB_100cdf64;
  }
  bVar1 = *param_3;
  if (bVar1 == 6) {
    local_48 = '\0';
LAB_100cdf9e:
    uVar9 = 0;
    puVar10 = (ushort *)(param_3 + 1);
    for (uVar6 = param_4 - 1; uVar6 = uVar6 & 0xffff, *param_3 <= uVar6; uVar6 = uVar6 - *param_3) {
      FUN_1011ea48(local_34,0,0x14);
      uVar2 = *puVar10;
      if (((uVar2 == 0) || (uVar9 = puVar10[1], uVar9 == 0)) || (uVar9 < uVar2)) goto LAB_100cdf90;
      if (local_48 == '\0') {
        uStack_47._1_2_ = puVar10[2];
      }
      else if (local_48 == '\x02') {
        puVar4 = &uStack_47;
        puVar7 = puVar10 + 2;
        do {
          puVar8 = puVar7 + 2;
          *puVar4 = *(undefined4 *)puVar7;
          puVar4 = puVar4 + 1;
          puVar7 = puVar8;
        } while (puVar8 != puVar10 + 10);
      }
      local_52 = 0x2801;
      if (*(char *)(param_5 + 0x10) == '\0') {
        local_52 = 0x2800;
      }
      local_50 = &local_48;
      local_34[0] = local_54;
      local_28 = &local_50;
      local_54[0] = 0;
      local_4c = uVar9;
      local_24 = uVar2;
      iVar3 = (**(code **)(param_5 + 4))(param_1,local_34,param_5);
      if (iVar3 == 0) {
        return;
      }
      puVar10 = (ushort *)((int)puVar10 + (uint)*param_3);
    }
    if ((uVar6 == 0) && (uVar9 != 0)) {
      FUN_10134c80(param_1,uVar9,param_5);
      return;
    }
  }
  else {
    if (bVar1 == 0x14) {
      local_48 = '\x02';
      goto LAB_100cdf9e;
    }
    FUN_100a5b78(DAT_100ce06c | (DAT_100ce068 - DAT_100ce064) * 0x20 & 0xff00U,DAT_100ce070,
                 DAT_100ce074,bVar1);
  }
LAB_100cdf90:
  pcVar5 = *(code **)(param_5 + 4);
LAB_100cdf64:
  (*pcVar5)(param_1,0,param_5);
  return;
}


for file in rtl/*.v rtl/*.sv; do
    if [ -f "$file" ]; then  # 检查文件是否存在
        sed -i '/FILE "firrtl_black_box_resource_files.f"/,/End of list/d' "$file"
    fi
done
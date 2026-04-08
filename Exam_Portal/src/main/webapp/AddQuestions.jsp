<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.sql.*" %>
<%
    String examId = request.getParameter("eid");
    if (examId == null) { response.sendRedirect("TrainerDashboard.jsp"); return; }
%>
<!DOCTYPE html>
<html>
<head>
    <title>Add Questions | ExamPortal</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet">
    <link href="https://fonts.googleapis.com/css2?family=Plus+Jakarta+Sans:wght@400;600;800&display=swap" rel="stylesheet">
    <style>
        body { font-family: 'Plus Jakarta Sans', sans-serif; background: #f8fafc; padding: 50px; }
        .q-card { background: #fff; border-radius: 20px; padding: 30px; box-shadow: 0 10px 30px rgba(0,0,0,0.05); max-width: 700px; margin: auto; }
        .form-control { border-radius: 10px; margin-bottom: 15px; border: 2px solid #f1f5f9; }
    </style>
</head>
<body>

<div class="q-card">
    <h3 class="fw-800 text-primary mb-4">Add New Question</h3>
    <p class="text-muted">Exam ID: <strong><%= examId %></strong></p>

    <form action="SaveQuestionProcess.jsp" method="post">
        <input type="hidden" name="eid" value="<%= examId %>">

        <label class="fw-600">Question Text</label>
        <textarea name="qtext" class="form-control" rows="3" required placeholder="Enter the question here..."></textarea>

        <div class="row">
            <div class="col-6">
                <label class="small fw-600">Option A</label>
                <input type="text" name="oa" class="form-control" required>
            </div>
            <div class="col-6">
                <label class="small fw-600">Option B</label>
                <input type="text" name="ob" class="form-control" required>
            </div>
            <div class="col-6">
                <label class="small fw-600">Option C</label>
                <input type="text" name="oc" class="form-control" required>
            </div>
            <div class="col-6">
                <label class="small fw-600">Option D</label>
                <input type="text" name="od" class="form-control" required>
            </div>
        </div>

        <label class="fw-600 mt-3">Correct Answer</label>
        <select name="correct" class="form-select form-control" required>
            <option value="A">Option A</option>
            <option value="B">Option B</option>
            <option value="C">Option C</option>
            <option value="D">Option D</option>
        </select>

        <div class="d-flex gap-2">
            <button type="submit" class="btn btn-primary w-100 rounded-pill fw-600 py-2">Save & Add Another</button>
            <a href="TrainerDashboard.jsp" class="btn btn-outline-secondary w-100 rounded-pill fw-600 py-2">Finished</a>
        </div>
    </form>
</div>

</body>
</html>